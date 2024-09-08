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

void print(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
}

void removeAll(int pos, int *a, int *pn){
	int i, j;
	for(i=(*pn)-1; i>=pos; i--)
		if(a[i]==a[pos]){
			for(j=i; j<(*pn)-1; j++)
				a[j]=a[j+1];
		(*pn)--;
		}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, *a;
	scanf("%d", &n);
  	a=(int *)calloc(n, sizeof(int));
  	input(a, n);
  	int i, cnt, pos=0;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  while(n>0){
  	pos=0;
  	cnt=0;
  	for(i=0; i<n; i++){
  		if(a[i]==a[pos])
	  		cnt++;
  	}
  	printf("%d-%d\n", a[pos], cnt);
  	removeAll(pos, a, &n);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
