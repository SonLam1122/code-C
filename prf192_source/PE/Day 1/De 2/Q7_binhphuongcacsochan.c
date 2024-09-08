#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void inputArray(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void outputArray(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d\n", a[i]);
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, n, *a;
	fflush(stdin);
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	inputArray(a, n);
  
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<n; i++)
		if(a[i]%2==0)
			printf("%d\n", a[i]=a[i]*a[i]);
	free(a);

  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
