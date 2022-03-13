#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	struct stat st;
	int fd;
	fd=open("p2.c",O_CREAT|O_RDONLY);
	printf("fd: %d\n",fd);
	fstat(fd,&st);
	stat("p2.c",&st);
	printf("file size: %lu\n",st);
}
