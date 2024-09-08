#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAXR 20
#define MAXC 20

void input(int m[][MAXC], int r, int c){
	int i, j;
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			scanf("%d", &m[i][j]);
}

void print(int m[][MAXC], int r, int c){
	int i, j;
	for(i=0; i<r; i++){
		for(j=0; j<c; j++)
			printf("%4d", m[i][j]);
		printf("\n");
	}
}

int printMaxMainDiagonal(int m[][MAXC], int r, int c){
	int i, j, max=m[0][0];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(i==j)
				if(max<m[i][j]) 
					max=m[i][j];
		}
	}
	return max;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int r, c;
  scanf("%d", &r);
  //square matrix
  c=r;
  int m[r][c];
  input(m, r, c);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  print(m, r, c);
  printf("%d", printMaxMainDiagonal(m, r, c));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
