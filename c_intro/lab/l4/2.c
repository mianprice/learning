#include <stdio.h>

void fn() {
	union bytes
	{
		unsigned int a;
		unsigned char s[4];
	};

	union bytes x;
	x.a = 0xAABBCCDD;
	printf("Int: %d\n Hex: %X\n", x.a,x.a);

	printf("Individual bytes\n");
	for (int i=3; i>=0; i--) {
		printf("%02X ",x.s[i]);
	}
	printf("\n");
}

int main() {
	fn();
	return 0;
}
