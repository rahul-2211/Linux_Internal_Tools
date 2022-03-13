//2.Write a program  that demonstrates repositioning of file offset using SEEK_SET, SEEK_END and SEEK_END.
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
int fd ,len;
char write_buff[50]="hi how are you?wow?";
char read_buf[50];
fd=open("linux_kernel.txt",O_CREAT|O_RDWR,777);
len=write(fd,write_buff,50);
printf("return value from write optn=%d\n",len);

lseek(fd,4,SEEK_SET);
read(fd,read_buf,len);
printf("data from buffer(read optn)=%s\n",read_buf);
close(fd);
return 0;
}
