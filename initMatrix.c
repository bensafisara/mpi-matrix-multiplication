

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initMatrix.h"


#define N   16      //matrix size



void generateRandomMatrix(int matrix[N][N], int lowerValue, int upperValue) {
	
	srand(time(0));
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = (rand() % (upperValue - lowerValue + 1)) + lowerValue;
		}
	}

}