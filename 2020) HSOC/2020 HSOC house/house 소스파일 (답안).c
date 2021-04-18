#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[32];
int main(int argc, char* argv[], char* envp[], int aric)
{
        if(argc<2)
        {
                printf(" x1001\n c2Ftc3VuZw== \n");
                return 0;
        }
        int fd = atoi( argv[1] ) - 0x1001;
        int len = 0;
        len = read(fd, buf, 32);
        if(!strcmp("samsung\n", buf))
        {
                printf("ZEdGcllXZHA=\n");
                exit(1);
        }
        if (!strcmp("hansei\n", buf))
        {
                printf("Y29va2ll\n");
                exit(0);
        }
	if (!strcmp("kakao\n", buf))
        {
                printf("a29yZWFu\n");
                exit(0);
        }
        if (aric)
        {
                printf("Z2lybGZyaWVuZA==\n");
                exit(0);
        }
        printf("Fail: try again\n");
        return 0;
}
