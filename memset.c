//memset
#include<stdio.h>
#include<string.h>

int main()
{
    const char str[]="srk819655@gmail.com";
    const char ch='#';
    
    printf("string before set/initialization is %s \n",str);
    
    memset(str,ch,strlen(str));
    
    printf("string after set/initialization is %s \n",str);
    
    return 0;
}
