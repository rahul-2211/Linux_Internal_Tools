#include<stdio.h>
#include<fcntl.h>



int main()
{
int fd1, fd2, fd3;
fd1=open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC, 0777);



printf("fd1=%d\n", fd1);



fd3=fcntl(fd1,F_DUPFD);
printf("fd3_dup of fd1=%d",fd3);



close(fd1);
close(fd2);
close(fd3);
}
