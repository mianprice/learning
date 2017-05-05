#include <stdio.h>
int main(int argc, char ** argv) {
	int i = 1;
	next:
	printf("%s\n",argv[i]);
	i++;
	if (i < argc) {
		goto next;
	}
	return 0;
}
