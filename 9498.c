#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {


	int test;

	scanf("%d", &test);

	if (test >= 90 && test <= 100) {
		printf("A");
	}
	else if (test >= 80 && test <= 89) {
		printf("B");
	}
	else if (test >= 70 && test <= 79) {
		printf("C");
	}
	else if (test >= 60 && test <= 69) {
		printf("D");
	}
	else {
		printf("F");
	}


	return 0;
}