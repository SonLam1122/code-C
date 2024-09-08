#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAXN 100

int removeOne(int pos, int *a, int *pn){
	if(pos<0 || pos>MAXN)
		return 0;
	int i;
	for(i=pos; i<(*pn)-1; i++)
		a[i]=a[i+1];
	(*pn)--;
	return 1;
}

void outputArray(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d\n", a[i]);
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, pos, *a, i;
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	fflush(stdin);
	scanf("%d", &pos);
	pos--;
	if(pos>0 && pos<=n)
		removeOne(pos, a, &n);
	else
		printf("\nOut of range!\n");
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	outputArray(a, n);
	free(a);

  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
