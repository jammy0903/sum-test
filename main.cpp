#include <stdio.h>
#include <stdint.h>
#include "add.h"

int main(int argc, char* argv[]) {

	uint32_t a = readConvert(argv[1]);
	uint32_t b = readConvert(argv[2]);
	uint32_t sum = Adding(a,b);
	printf("%u + %u = %u\n",a,b,sum);
	return 0;
	}
