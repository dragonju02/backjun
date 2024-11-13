#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char ary[100];
	int num = 0;
	scanf("%s", ary);

	for (int i = 0; ary[i] != '\0'; i++) {
		num++;
	}

	for (int j = 0; j < num / 2; j++) {
		if (ary[j] == ary[num - j - 1]) continue;
		else {
			printf("0");
			exit(0);
		}
	}
	printf("1");
	return 0;
}