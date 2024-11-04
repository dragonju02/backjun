#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hour, minute;

	scanf("%d %d", &hour, &minute);
	getchar();

	minute -= 45;

	if (minute < 0) {
		hour--;
		minute += 60;
		if (hour < 0) {
			hour += 24;
		}
	}
		printf("%d %d", hour, minute);
	

	return 0;
}