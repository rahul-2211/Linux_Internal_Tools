#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

pthread_t id;

void *thr_fn(void *ard)
{
    pid_t pid;
	pthread_t tid;
	pid=getpid();
	tid=pthread_self();
	printf("pid %u tid %u \n",(unsigned int)pid,(unsigned int)id);
	return 0;
    
}

int main(void)
{
	int err;
	err=pthread_create(&id,NULL,thr_fn,NULL);
	if(err!=0)
	{
	    printf("cant create thread %s\n",stderror(err));
	}
	while(1);
	exit(0);

}
