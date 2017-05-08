#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char * str = (char *) malloc(3*sizeof(char));
	strcpy(str, "hi");
	printf("%s\n", str);
	free(str);
	char *str2 = str + 1;
	printf("%s\n",str2);
	strcpy(str2, "hello");
	printf("%s\n", str2);
	
	
	str = (char *) malloc(6*sizeof(char));
	strcpy(str, "hello");
	printf("%s\n", str);
	printf("%s\n",str2);

	free(str);
	free(str2);
	printf("%s\n", str);

	return 0;
}

