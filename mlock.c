// mlock

#include<unistd.h>
#include<stdio.h>

main()
{
    size_t i;
    const int alloc_size=32*10;
    char* memory = malloc(alloc_size);
    
    mlock(memory,alloc_size);
    for(i=0;i<alloc_size;i++)
    {
        memory[i]='#';
        printf("allocated memory initialized with = %s\n",memory);
        munlock(memory,alloc_size);
    }
}
