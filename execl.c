//In execl() system function takes the path of the executable binary file (i.e. /bin/ls) as the first and second argument. Then, the arguments (i.e. -lh, /home) that you want to pass to the executable followed by NULL. Then execl() system function runs the command and prints the output. If any error occurs, then execl() returns -1. Otherwise, it returns nothing.
//no pid generated
//Syntax:
//int execl(const char *path, const char *arg, ..., NULL);
/*
int main()
{
	printf("i am going to execute ls -l program\n");
	vfork();
	execl("/bin/ls","ls","-l",0);
	printf("i executed ls program");
	printf("i executed ls program");
	printf("i executed ls program");
}*/

int main()
{
	int ret;

	execl("/usr/bin/vi","vim","info1.txt",0);
if(ret==-1)
{

	printf("execl returned error %d\n",ret);
	
}
}
