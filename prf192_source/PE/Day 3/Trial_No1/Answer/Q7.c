#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void input(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void output(int *ar, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", ar[i]);
	}
}

void findTheFirstPair(int *a, int n, int sum){
	int i, j, keepReading=1;
		for(i=0; i<n-1 && keepReading; i++){
			for(j=i+1; j<n && keepReading; j++)
				if(a[i]+a[j]==sum){
					printf("%d\n%d", i, j);
					keepReading=0;
				}
		}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int *a, n, sum;
	printf("n= ");
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	input(a, n);
	scanf("%d", &sum);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  findTheFirstPair(a, n, sum);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
