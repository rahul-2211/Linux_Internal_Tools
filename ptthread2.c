#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
pthread_t tid;
pthread_t tid1;

void * thread1(void *arg)
{
printf("newly created thread1 is executing\n");
return NULL;
}

void * thread2(void *arg)
{
printf("newly created threa2 is executing\n");
return NULL;
}



int main()
{
int ret= pthread_create(&tid,NULL,thread1,NULL);
int ret1= pthread_create(&tid1,NULL,thread2,NULL);
if(ret && ret1)
	printf("thread is not created\n");
else
	printf("thread is created\n");
	//sleep(2);
pthread_join(tid,NULL);///it is lib. used to make you parents to current execution
pthread_join(tid1,NULL);
return 0;

}
