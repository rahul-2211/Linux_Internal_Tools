#include<pthread.h>
#include<stdio.h>
pthread_t tid;

void * thread1(void *arg)
{
printf("newly created thread is executing\n");
return NULL;
}

int main()
{
int ret= pthread_create(&tid,NULL,thread1,NULL);
if(ret)
	printf("thread is not created\n");
else
	printf("thread is created\n");
	sleep(2);
	pthread_join(tid,NULL);///it is lib. used to make you parents to current execution
return 0;

}
