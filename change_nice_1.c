#include<stdio.h>
#include<unistd.h>
#include<errno.h>

int main()
{
    int ret,i,cnt;
    errno=0;
    ret=nice(1);
    
    if(ret == -1 && errno!=0)
            perror("nice");
    else
            printf("nice value is now %d\n",ret);
    while(1)
    {
        printf("process with nice value %d count =%d\n",ret,cnt);
        for(i=0;i<10000000;i++);
        cnt++;
    }
    // taskset -c 1 ./nice1 & taskset -c 1 ./nice1//taskset assigning cpu,- ischanging the cpu ,1 is for cpu 1


    //% is special backgrd symbol in cmdline that force to following coomand in to backgrd.
    
}
