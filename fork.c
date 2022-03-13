#include<unistd.h>
#include<stdio.h>
/*int main()
{
printf("st1\n");
fork();
fork();

printf("st2\n");
while(1);
}*/

int main()
{
	int pid_1;
printf("curr process pid=%d\n",getpid());
pid_1=vfork();
if(pid_1==0)
{
printf("new child pid =%d\n",getpid());
printf("new child parent pid =%d\n",getpid());
}
else
{
//sleep(3);
printf("parent process pid =%d\n",getpid());
printf("parent process ppid =%d\n",getpid());
}
while(1);
return 0;
}
