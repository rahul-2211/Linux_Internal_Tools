//memchr
#include<stdio.h>
#include<string.h>

int main()
{
    const char str[]="srk819655@gmail.com";
    const char ch='.';
    char *ret;
    
    printf("string before set/initialization is %s \n",str);
    
    ret=memchr(str,ch,strlen(str));
    
    printf("string after **%c** is **%s** \n",ch,ret-7);
    
    return 0;
}
