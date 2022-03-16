#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
// #include<sys/mman.h>

void *my(void *i)
{
    printf("i am in %d thread\n",(int *)i);
    // return 0;
}
main()
{
    // pthread_attr_t Attr;
    pthread_t tid;
    struct sched_param param;
    int priority,policy,ret;
    
    ret=pthread_getschedparam(pthread_self(),&policy,&param);
    
    if(ret!=0)
    {
        perror("getschedparam");
    }
    printf("\n...........................Main Thread..............\n policy:%d \t priority: %d\n",policy,param.sched_priority);
    policy=SCHED_FIFO;
    param.sched_priority=3;
    
    ret =pthread_setschedparam(pthread_self(),policy,&param);
    
    if(ret!=0)
    {
        perror("setschedparam");
    }
    ret =pthread_getschedparam(pthread_self(),&policy,&param);
 if(ret!=0)
    {
        perror("getschedparam");
    }    
	printf("\n...........................Main Thread..............\n policy:%d \t priority: %d\n",policy,param.sched_priority);
    
    
 
    return 0;
    
}

