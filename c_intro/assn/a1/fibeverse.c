#include <stdlib.h>
#include <string.h>
#include "fibonacci.h"
#include "reverse.h"

int main(int argc, char *argv[]) {
	int i = 1;

	if (i < argc) {
		#ifdef FIBONACCI
		print_fib(atoi(argv[i]));
		i++;
		#endif
	}

	if (i < argc) {
		#ifdef REVERSE
		reverse(argv[i], strlen(argv[i]));
		i++;
		#endif
	}

	return 0;
}
