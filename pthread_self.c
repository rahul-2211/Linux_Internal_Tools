#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

struct my_thread
{
  int thread_id;
  char msg[100];
};

void *printHello(void *threadobj)
{
    pthread_t thread_ID;
    struct my_thread *t1;
    t1=(struct my_thread *) threadobj;
    thread_ID=pthread_self();
    printf("\n thread_ID: %u",thread_ID);
    printf("\n %d thread_message: %s\n",t1->thread_id,t1->msg);
    
}
int main()
{
    pthread_t thread2,thread3,thread4,thread_ID;
    int rc;
    struct my_thread t2,t3,t4;
    t4.thread_id=4;
    strcpy(t4.msg,"I am forth Thread\n");
    t2.thread_id=4;
    strcpy(t2.msg,"I am forth Thread\n");
    t3.thread_id=4;
    strcpy(t3.msg,"I am forth Thread\n");
    
    thread_ID=pthread_self();
    printf("\n Main thread_ID: %u",thread_ID);
    
    pthread_create(&thread4,NULL,printHello,(void *)&t4);
    
    printf("\n Exit form main Thread\n");
    pthread_exit(NULL);
}
