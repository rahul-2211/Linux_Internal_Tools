#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	int fd;
	char buf[300];
	int res;
	fd = open("maxfds.c",O_CREAT|O_RDWR,777);
	close(fd);
	return 0;

}
