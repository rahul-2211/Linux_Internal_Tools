#include<stdio.h>
int main(int argc,char *argv[])
{
int i;
printf("\n file name: %s\n",argv[0]);//a.out
printf("\n total no. of argument: %d\n",argc);//
printf("\n Argument passing: ");
execl("home/rahul/Desktop","ls",0);
for(i=1;i<argc;i++)
	printf("%s",argv[i]);
printf("\n");
}
