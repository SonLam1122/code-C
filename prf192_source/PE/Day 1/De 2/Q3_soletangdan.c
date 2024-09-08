#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void ascBubbleSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n, i, j, *a, *b, cnt=0;
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<n; i++){
		if(abs(a[i]%2)==1){
			cnt++;
		}
	}
	b=(int *)calloc(cnt, sizeof(int));
	j=0;
	for(i=0; i<n; i++)
		if(abs(a[i]%2)==1){
			b[j]=a[i];
			j++;
	}
	ascBubbleSort(b, cnt);
	for(j=0; j<cnt; j++)
		printf("\n%d", b[j]);
	free(b);
	free(a);
  
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
