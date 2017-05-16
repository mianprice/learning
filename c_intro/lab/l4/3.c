#include <stdio.h>

int main() {

	struct X {
		short s;
		int i;
		char c;
	};

	struct Y {
		int i;
		char c;
		short s;
	};

	struct Z {
		int i;
		short s;
		char  c;
	};

	printf("X %d Y %d Z %d\n", sizeof(struct X), sizeof(struct Y), sizeof(struct Z));

	return 0;

}
