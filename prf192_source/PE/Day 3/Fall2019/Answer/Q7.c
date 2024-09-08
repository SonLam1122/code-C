#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void input(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		fflush(stdin);
		scanf("%d", &a[i]);
	}	
}

void intAscBubbleSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n; i++){
		for(j=n-1; j>i; j--)
			if(a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

void print(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d\n", a[i]);
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n=7, *a;
  	a=(int *)calloc(n, sizeof(int));
  	input(a, n);
  	int i, j, cnt1, cnt2, maxFreq1=0, maxFreq2=0;
	int maxFreqVal1, maxFreqVal2;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i=0; i<n; i++){
	  	cnt1=0;
	  	for(j=i; j<n; j++)
	  		if((a[j]==a[i]) && (a[i]>=10))
	  			cnt1++;
	  	if (cnt1>maxFreq1 && cnt1>=1){
	  		maxFreq1=cnt1;
	  		maxFreqVal1=a[i];
		}
  	}
  	
  	for(i=0; i<n; i++){
	  	cnt2=0;
	  	for(j=i; j<n; j++)
	  		if((a[j]==a[i]) && (a[i]>=10) && (a[j]!=maxFreqVal1))
	  			cnt2++;
	  	if (cnt2>maxFreq2 && cnt2>=1){
	  		maxFreq2=cnt2;
	  		maxFreqVal2=a[i];
		}
  	}
    if((maxFreq1>=1) && (maxFreq2>=1))
    	printf("%d %d", maxFreqVal1, maxFreqVal2);
	else if(maxFreq1>=1)
		printf("%d\n", maxFreqVal1);
	else if(maxFreq2>=1)
		printf("%d\n", maxFreqVal2);
	else
		printf("No two-digit number\n");

  free(a);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
