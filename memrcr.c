//memcmp
#include<stdio.h>
#include<string.h>

int main()
{
    char buf1[10];
    char buf2[10];
    int ret;
    memcmp(buf1,"madam",5);
    memcmp(buf1,"mad",5);
    ret=memcmp(buf1,buf2,5);
    
    if(ret>0)
    {
        printf("buf1 is greater than buf2");
        printf("ascii diff %d",ret);
    }
    else if(ret<0)
    {
        printf("buf2 is greater than buf2");
        printf("ascii diff %d",ret);
    }
    else 
    {
        printf("buf2 is equal buf1");
    }
    
    return 0;
}
