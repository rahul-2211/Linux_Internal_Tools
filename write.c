#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>


int main()
{
int fd,len;
int x;
char write_buf[60]="linux kernel new program ?,wow?";

fd = open("linux.txt",O_CREAT | O_RDWR,077);
write(fd,write_buf,60);

close(fd);
return 0;
}

