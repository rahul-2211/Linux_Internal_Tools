#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>

void callback1()
{
printf("callback1 func called\n");
}

void callback2()
{
printf("callback2 func called\n");
}
void callback3()
{
printf("callback3 func called\n");
}

int main()
{

printf("regstering callback1\n");
atexit(callback1);

printf("regstering callback2\n");
atexit(callback2);

printf("regstering callback3\n");
atexit(callback3);

printf("main exit now\n");
	
exit(0);



//printf("parent reporting exit of child whose pid=%d\n",waitpid(pid,&status,0));

return 0;
}
