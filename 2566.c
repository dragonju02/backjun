#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void) {
//
//	int ary[10][10];
//	int max = 0;
//	int pos1, pos2;
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			scanf("%d", &ary[i][j]);
//			if (ary[i][j] > max) {
//				max = ary[i][j];
//				pos1 = i;
//				pos2 = j;
//			}
//		}
//	}
//	printf("%d\n", max);
//	printf("%d %d\n", pos1+1, pos2+1);
//
//
//	
//
//	return 0;
//}


int main(void) {

	int ary[9][9] = { 0 };
	int max =0;
	int pos1, pos2;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &ary[i][j]);
			if (ary[i][j] >= max) {
				max = ary[i][j];
				pos1 = i;
				pos2 = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", pos1+1, pos2+1);


	return 0;
}