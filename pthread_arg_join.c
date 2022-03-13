#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

static void* thdFun(void *arg)
{
char *s = (char*)arg;
printf("%s\n",s);
sleep(5);
return(void*)strlen(s);
return 0;
}
int main(int argc,char *argv[])
{
	pthread_t t1;
void *res;
int s;
pthread_create(&t1,NULL,thdFun,"Hello world");
printf("message from  main\n");
sleep(3);
pthread_join(t1,&res);
printf("thread retuned %ld\n",(long)res);
exit(0);
}
