#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = i + 1; j < a; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < a - 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf(" ");
		}
		for (int k = 2 * a - 1; k > 2 * i + 2; k--) {
			printf("*");
		}
		printf("\n");

	}

	return 0;
}