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
	again:
	if (i % 2 == 1) {
		printf("%d ",i);
	}
	i++;
	if (i < 10) {
		goto again;
	}
	printf("\n");
}

void amaze4() {
	int i = 1;
	printf("  amaze4:\t");
	for (;;) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
		if (i >= 10) {
			goto done;
		}
	}
	done:
	printf("\n");
}

void amaze5() {
	int i = 1;
	int j;
	printf("  amaze5:\t");
	check:
	if (i >= 10) goto end;
	j = i % 2;
	if (j == 1) printf("%d ",i);
	i++;
	goto check;
	end:
	printf("\n");
}

void amaze6() {
	int i = 1;
	int j;
	printf("  amaze6:\t");
	start:
	if (i >= 10) goto end;
	j = i % 2;
	switch (j) {
		case 1:
			printf("%d ",i);
		default:
			i++;
			goto start;
	}
	end:
	printf("\n");
}

void amaze7() {
	int i = 1;
	int count = 0;
	printf("  amaze7:\t");
	for (;;) {
		if (i >= 10) goto end;
		if (i % 2 == 1) {
			goto odd;
		} else {
			goto even;
		}
		loop:
		count++;
	}
	odd:
	printf("%d ",i);
	even:
	i++;
	goto loop;
	end:
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
