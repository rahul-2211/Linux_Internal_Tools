#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>


void *th_fn(void *p);
int fd;
int main()
{
    pthread_t t1,t2;
    
    fd = open("/etc/passwd",O_RDONLY);
    printf("file opened with fd: %d\n",fd);
    
    pthread_create(&t1,NULL,th_fn,"Thread 1");
    pthread_create(&t2,NULL,th_fn,"Thread 2");
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}

void * th_fn(void *p)
{
    char *str,buff[100];
    int n,pid;
    str=(char *)p;
    pid=getpid();
    printf("%$s:\t started now: \tfpr process %d \n\n",str.pid);
    do{
        n=read(fd,buff,100);
        printf("%s:\t Read:\t %d \n\n",str,pid);
        prinf("\n.....................\n");
        write(1,buff,n);
        
        prinf("\n.....................\n");
        sleep(3);
    }while(n);
    printf("%s \t Finished :\t for process %d \n\n",str,pid);
}





	pthread_t id;

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
