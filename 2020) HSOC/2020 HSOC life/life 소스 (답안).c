#include <stdio.h>

int func1 ()
{
	 printf("!!Fail!!\n");
	 return -1;
}

int func2 ()
{
	printf("Flag is \"WTIxR2FWbHRiREE9\"\n");
	return 1;
}

int func3 ()
{
	printf("Flag is\" VjFjeFIyUldiRmhPVjJjOQ==\"\n");
}

int func4 ()
{
	printf("Flag is \"linux\"\n");
}

int func5 ()
{
	printf("Flag is \"Vm1wR2FtVkdTWGxWYkdScFVtMW9VRlpxU21wUFVUMDk=\"\n");
}

int main()
{
	char buffer[10];
	scanf("%s", buffer);
	printf("%s\n", buffer);
	func1 ();
	return 0;
}
