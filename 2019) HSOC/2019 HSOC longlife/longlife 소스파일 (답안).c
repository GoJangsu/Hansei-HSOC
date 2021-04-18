#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FILENAME "hansei"
int main(int argc, char* argv[]) {
	
	char a = "Secret code : ETEYYUEGKFKJKHLCWTEDVHFYXGDYXTXV\n";	
	FILE *file;
	char string[255];
	
	if ((file = fopen(FILENAME, "r")) == NULL) {
		printf("file open failed\n");
		return 0;
	}
	
	memset(string,0x00,255);
	fscanf(file,"%s",&string);
	//printf(" input code : %s\n", string);
	for (int i = 0; i < strlen(string); i++){
		string[i] = string[i] + 19;
	}
	printf(" Secret code : %s\n", string);
	fclose(file);
	return 0;
}
