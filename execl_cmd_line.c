#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{

	printf("can you see me[ONE]\n");
	execl("/home","./examming","kernel","programming",NULL);
	printf("can you see me[TWO]\n");

}
