#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int print;

	scanf("%d", &num);

	print = num / 4;

	for (int i = 0; i < print; i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}