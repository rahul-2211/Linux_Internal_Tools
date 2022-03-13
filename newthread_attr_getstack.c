#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/mman.h>

void* Proc(void * param)
{
    sleep(2);
    return 0;
}



int main()
{
	pthread_attr_t Attr;
	pthread_t Id;
	void *Stk;
	size_t siz;
	int err;
	
	size_t my_stksize=0x30000000;
	void * my_stack;
	
	pthread_attr_init(&Attr);
	pthread_attr_getstacksize(&Attr,&siz);
	pthread_attr_getstackaddr(&Attr,&Stk);
	
	printf("default: Addr=%08x default Size=%d\n",Stk,siz);
	
	my_stack=(void *)malloc(my_stksize);
	
	pthread_attr_setstack(&Attr,my_stack,my_stksize);
	
	pthread_attr_create(&Id,Proc,NULL);
	
	pthread_attr_getstack(&Attr,&Stk,&siz);
	
	printf("newly created stack: Addr=%08x ans Size=%d\n",Stk,siz);
	
	sleep(3);
	
	return(0);
	
	
}
