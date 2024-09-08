#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void input(float *a, int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%f", &a[i]);
}

void output(float *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%f ", a[i]);
	}
}

void descBubbleSort(float *a, int n){
	int i, j;
	float t;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(a[j]>a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n=5;
  float a[n];
  input(a, n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  descBubbleSort(a, n);
  output(a, n);
  free(a);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
