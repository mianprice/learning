#include <stdio.h>
void amazeWOW() {
	int i;
	printf("amazeWOW:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void amaze1() {
	int i = 1;
	printf("  amaze1:\t");
	while (i < 10) {
		printf("%d ",i);
		i = i + 2;
	}
	printf("\n");
}

void amaze2() {
	int i = 1;
	printf("  amaze2:\t");
	do {
		if (i % 2 == 1) {
			printf("%d ",i);
		}
	}while (i++ < 10);
	printf("\n");
}

void amaze3() {
	int i = 1;
	printf("  amaze3:\t");

	printf("\n");
}

void amaze4() {
	int i = 1;
	printf("  amaze4:\t");

	printf("\n");
}

void amaze5() {
	int i = 1;
	printf("  amaze5:\t");

	printf("\n");
}

void amaze6() {
	int i = 1;
	printf("  amaze6:\t");

	printf("\n");
}

void amaze7() {
	int i = 1;
	printf("  amaze7:\t");

	printf("\n");
}


int main() {
	amazeWOW();
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	amaze7();
	return 0;
}
