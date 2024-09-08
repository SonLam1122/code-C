#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void input(int *a, int n){
	int i;for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void ascBubbleSort(int *a, int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(a[j]<a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

void descBubbleSort(int *a, int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(a[j]>a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

void print(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("\n%d", a[i]);
}

void print_EvenDesc_OddDesc(int *a, int n){
	descBubbleSort(a, n);
	int i;
	for(i=0; i<n; i++){
		if(a[i]%2==0)
			printf("%d\n", a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]%2==1)
			printf("%d\n", a[i]);
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int a[n];
  input(a, n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  print_EvenDesc_OddDesc(a, n);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
