#include<stdio.h>
#include<unistd.h>
int main()
{	printf("my proces id=%d\n",getpid());
printf("my parent id=%d\n",getppid());
printf("linux kernel\n");
while(1)
	return 0;
}
