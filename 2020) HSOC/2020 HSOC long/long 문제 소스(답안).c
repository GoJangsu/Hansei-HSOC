#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[32];
int main(int argc, char* argv[], char* envp[], int aric)
{
	if(argc<2)
	{
		printf("x1234\n WVVkR2RXTXlWbkE9\n");
		return 0;
	}
	int fd = atoi( argv[1] ) - 0x1234;
	int len = 0;
	len = read(fd, buf, 32);
	if(!strcmp("hansei\n", buf))
	{
		printf("WWxkc2RXUkJQVDA9\n");
		exit(0);
	}
	if (!strcmp("school\n", buf))
	{
		printf("WWtjNWRWcDNQVDA9\n");
		exit(0);
	}
	if (aric)
	{
		printf("Flag is V1cxNE1WcFJQVDA9");
		exit(0);
	}
	printf("Fail: try again\n");
	return 0;
}
