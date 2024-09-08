#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define MAXR 20
#define MAXC 20

void input(int m[][MAXC], int r, int c){
	int i, j;
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("m[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
}

int max(int m[][MAXC], int r, int c){
	int i, j, max;
	max=m[0][0];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(m[i][j]>max) 
				max=m[i][j];
		}
	}
	return max;
}

void output(int m[][MAXC], int r, int c){
	int i, j;
	printf("\nMatrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%6d", m[i][j]);
		}
	printf("\n");
	}
}

int main(){
	int m[MAXR][MAXC];
	int r, c, maxVal;
	printf("Enter rows, cols of matrix: ");
	scanf("%d %d", &r, &c);
	assert(r<=MAXR);
	assert(c<=MAXC);
	input(m, r, c);
	output(m, r, c);
	printf("\nMax value of matrix: %d\n", max(m, r, c));
getch();
return 0;
}
