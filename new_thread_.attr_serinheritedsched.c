#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
// #include<sys/mman.h>

void* proc(void* param)
{
    sleep(3);
    return 0;
}
int main(int argc, char *argv[])
{
    pthread_attr_t Attr;
    pthread_t Id;
    int info,err;
    
    pthread_attr_init(&Attr);
    pthread_attr_getinheritsched(&Attr,&info);
   
    switch(info)
    {
        case PTHREAD_INHERIT_SCHED:
            printf("\nSCHED");
            break;
        
        case PTHREAD_EXPLICIT_SCHED:
            printf("\nEXPLICIT");
            break;
    }
    
    pthread_attr_setinheritsched(&Attr,PTHREAD_EXPLICIT_SCHED);
    pthread_attr_getinheritsched(&Attr,&info);
    
    switch(info)
    {
        case PTHREAD_INHERIT_SCHED:
            printf("\nSCHED");
            break;
        
        case PTHREAD_EXPLICIT_SCHED:
            printf("\nEXPLICIT");
            break;
    }
    printf("\nprocess creating thread whose schd policy is givrn by thread task");
    pthread_create(&Id,&Attr,proc,NULL);
    pthread_join(Id,NULL);
    return 0;
    
}

