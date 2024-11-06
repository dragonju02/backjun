#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	int sc1, sc2;
	scanf("%d %d", &sc1, &sc2);

	int** ary1 = (int**)malloc(sc1 * sizeof(int*));
	for (int i = 0; i < sc1; i++) {
		ary1[i] = (int*)malloc(sc2 * sizeof(int));
	}

	int** ary2 = (int**)malloc(sc1 * sizeof(int*));
	for (int i = 0; i < sc1; i++) {
		ary2[i] = (int*)malloc(sc2 * sizeof(int));
	}

	int** result = (int**)malloc(sc1 * sizeof(int*));
	for (int i = 0; i < sc1; i++) {
		result[i] = (int*)malloc(sc2 * sizeof(int));
	}

	for (int i = 0; i < sc1; i++) {
		for (int j = 0; j < sc2; j++) {
			scanf("%d", &ary1[i][j]);
		}
	}
	for (int i = 0; i < sc1; i++) {
		for (int j = 0; j < sc2; j++) {
			scanf("%d", &ary2[i][j]);
		}
	}

	for (int i = 0; i < sc1; i++) {
		for (int j = 0; j < sc2; j++) {
			result[i][j] = ary1[i][j] + ary2[i][j];
		}
	}

	for (int i = 0; i < sc1; i++) {
		for (int j = 0; j < sc2; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < sc1; i++) {
		free(ary1[i]);
	}
	free(ary1);
	for (int i = 0; i < sc1; i++) {
		free(ary2[i]);
	}
	free(ary2);
	for (int i = 0; i < sc1; i++) {
		free(result[i]);
	}
	free(result);

	return 0;
}*/

//#include <stdio.h>
//
//int main()
//{
//	int row = 0, column = 0; //줄과 열
//	int A[101][101] = { 0}; //행렬 A
//	int B[101][101] = { 0}; //행렬 B
//	int Sum[101][101] = { 0}; //덧셈 결과값
//
//	scanf("%d %d", &row, &column); //행렬 크기 입력
//
//	for (int i = 0; i < row; i++) { //행렬 A 입력
//		for (int j = 0; j < column; j++) {
//			scanf("%d", &A[i][j]);
//		}
//	}
//
//	for (int i = 0; i < row; i++) { //행렬 B 입력
//		for (int j = 0; j < column; j++) {
//			scanf("%d", &B[i][j]);
//		}
//	}
//
//	for (int i = 0; i < row; i++) { // 행렬 덧셈
//		for (int j = 0; j < column; j++) {
//			Sum[i][j] = A[i][j] + B[i][j];
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			printf("%d ", Sum[i][j]); //출력
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

#include <stdio.h>

int main(void) {

	int a[100][100] = { 0 };
	int b[100][100] = { 0 };
	int sum[100][100] = { 0 };

	int col, row;

	scanf("%d %d", &col, &row);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}


	return 0;
}