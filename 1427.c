#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char ary[10];
	int len;
	char temp;

	scanf("%s", ary);
	len = strlen(ary);

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (ary[j] < ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}

	printf("%s", ary);


	return 0;
}