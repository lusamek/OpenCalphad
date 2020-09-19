

// Linux
 
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

#define FNAME file1
#define PORT 5555
#define BUFSIZE 128
#define LISTENQ 5

int main(int argc, char **argv)
{
	int	listenfd, connfd, fd, pid, n, size;
	struct sockaddr_in servaddr;
	char buf[BUFSIZE],fname[50],command[50];

	struct stat stat_buf;


	listenfd = socket(AF_INET, SOCK_STREAM, 0);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family      = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port        = htons(PORT);

	bind(listenfd, (struct sockaddr *) &servaddr, sizeof(servaddr));

	listen(listenfd, LISTENQ);
		printf("listening\n");

	for ( ; ; )
	{
		connfd = accept(listenfd, (struct sockaddr *) NULL, NULL);

		printf("Handling connection request\n");
		recv(connfd, command, 50, 0);
		printf("command received: %s\n", command);

		if(strcmp(command, "GET") == 0){
			recv(connfd,fname,50,0);
			printf("File name is %s \n:  ", fname);

			fd=open(fname,O_RDONLY,S_IRUSR);
			fstat(fd, &stat_buf);
			size = stat_buf.st_size;

			printf(" size is %d\n", size);
			printf("\nopened file\n");
			while ( (n = read(fd, buf, BUFSIZE-1)) > 0)
			{
				buf[n] = '\0';
				write(connfd,buf,n);
			}
			printf("file transfer completed \n");
			close(connfd);
			close(fd);
		}
		else if(strcmp(command, "PUT") == 0){
			recv(connfd,fname,50,0);
			printf("File name is %s :  ", fname);
			fd=open(fname,O_WRONLY|O_CREAT,S_IRWXU);
			while ( (n = read(connfd, buf, BUFSIZE-1)) > 0)
			{
				buf[n] = '\0';
				write(fd,buf,n);
				if( n < BUFSIZE-2)
					break;
			}

			printf("file receiving completed \n");
			close(connfd);
			close(fd);
		}
		else if(strcmp(command, "LIST") == 0){
			struct dirent *de;

		    DIR *dr = opendir(".");
		    if (dr == NULL)
		    {
		    	char result[50] = "Could not open current directory\n";
		        printf("%s\n", result);
		        send(connfd, result, sizeof(result), 0);
		    }

			while ((de = readdir(dr)) != NULL){
                char string[50];
                strcpy(string, de->d_name);
                printf("%s\n", string);
			    send(connfd, string, sizeof(string), 0);
            }

		    char stop[] = "STOP";
		    send(connfd, stop, sizeof(stop), 0);
		    closedir(dr);
		    printf("file listing completed \n");
		    close(connfd);
		}
		// exit(1);
	}
}




