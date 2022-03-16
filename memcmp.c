//memcmp
#include<stdio.h>
#include<string.h>

int main()
{
    char buf1[10];
    char buf2[10];
    int ret;
    memcpy(buf1,"madam",5);//madam 97.....108
    memcpy(buf1,"mad",5);//mam
    ret=memcmp(buf1,buf2,5);
    
    if(ret>0)
    {
        printf("buf1 is greater than buf2\n");
        printf("ascii diff %d\n",ret);
    }
    else if(ret<0)
    {
        printf("buf2 is greater than buf2\n");
        printf("ascii diff %d",ret);
    }
    else 
    {
        printf("buf2 is equal buf1\n");
    }
    
    return 0;
}
