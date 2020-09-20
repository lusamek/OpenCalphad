
// Linux

#include<sys/ioctl.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<net/if_arp.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<string.h>
#include <stdio.h>

#define FNAME file1
#define PORT 5555
#define BUFSIZE 128

int main(int argc, char **argv)
{
        printf( "Example: telclient 127.0.0.1 \n");

	int sockfd, fd, n, size,count=0;
	long int size1,size2;
	char buf[BUFSIZE], fname[50], command[50];
	struct sockaddr_in servaddr;
	struct stat stat_buf;

	if (argc != 2) 
	{
	    printf("Usage: %s server_address", argv[0]);
   	    exit(1);
	}

	printf("11\n");
	if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		exit(1);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port   = htons(PORT);
	if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0)
		exit(1);

	printf("22\n");

	if (connect(sockfd, (struct sockaddr*) &servaddr, sizeof(servaddr)) < 0)
		exit(1);
	printf("connection established\n");

	printf("Enter FTP command: ");
	scanf("%s",command);
	send(sockfd,command,sizeof(command),0);

	if(strcmp(command, "GET") == 0){
		printf("Enter the name of the file u want to receive : ");
		scanf("%s",fname);
		send(sockfd,fname,sizeof(fname),0);

		fd=open(fname,O_WRONLY|O_CREAT,S_IRWXU);
		while ( (n = read(sockfd, buf, BUFSIZE-1)) > 0)
		{
			buf[n] = '\0';
			write(fd,buf,n);
			if( n < BUFSIZE-2)
				break;
		}

		printf("file receiving completed \n");
		close(sockfd);
		close(fd);
	}
	else if(strcmp(command, "PUT") == 0){
		printf("Enter the name of the file u want to receive : ");
		scanf("%s",fname);
		send(sockfd,fname,sizeof(fname),0);
		fd=open(fname,O_RDONLY,S_IRUSR);
		fstat(fd, &stat_buf);
		size = stat_buf.st_size;
		printf(" size is %d\n", size);
		printf("\nopened file\n");
		while ( (n = read(fd, buf, BUFSIZE-1)) > 0)
		{
			buf[n] = '\0';
			write(sockfd,buf,n);
		}
		printf("file transfer completed \n");
		close(sockfd);
		close(fd);

	}
	else if(strcmp(command, "LIST") == 0){
		printf("Files in the current directory : \n");
		for(;;){
			memset(&fname, '\0', 50);
			int temp = recv(sockfd, fname, 50, 0);
			if(strcmp(fname, "STOP") == 0){
				printf("No more files in the directory.\n");
				break;
			}
			printf("%s\n", fname);
		}
		close(sockfd);
	}
    else{
        printf("Error: Not a valid FTP command.\n");
        close(sockfd);
    }

    exit(0);
}



