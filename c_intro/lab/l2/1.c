#include <stdio.h>

int tri(int x) {
	int sum;
	for (int i = 0; i <= x; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	for (int i = 0; i <= 100; i++) {
		printf("%d\n", tri(i));
	}
	return 0;
}
