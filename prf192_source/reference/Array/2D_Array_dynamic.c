#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int r=3, c=4, m1[r][c], i, j;
	
	printf("\nMemory of m1\n");
	printf("m1, addr: %u, value: %u\n", &m1, m1);
	for(i=0; i<r; i++){
		for(j=0; j<c; j++)
			printf("%u\t", &m1[i][j]);
		printf("\n");
	}
	
	int *p=(int *) malloc(sizeof(int));
	printf("\nMemory of p\n");
	printf("p, addr: %u, value: %u\n", &p, p);
	
	double **m2;
	m2=(double**) calloc(r, sizeof(double*));
	m2[0]=(double*) calloc(4, sizeof(double));
	m2[1]=(double*) calloc(4, sizeof(double));
	m2[2]=(double*) calloc(4, sizeof(double));
	printf("\nMemory of m2\n");
	printf("m2, addr: %u, value: %u\n", &m2, m2);
	for(i=0; i<r; i++){
		for(j=0;j<c; j++)
			printf("%u\t", &m2[i][j]);
		printf("\n");
	}
	free(m2);
	free(p);
getchar();
return 0;
}
