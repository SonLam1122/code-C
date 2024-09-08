#include <stdio.h>
#include <stdlib.h>

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

void ascBubbleSort(int *ar, int n){
	int i, j, t;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(ar[j]<ar[j-1]){
				t=ar[j];
				ar[j]=ar[j-1];
				ar[j-1]=t;
			}
	}
}

void printNum_Odd_Even(int *a, int n){
	int numberOfOdds=0, numberOfEvens=0;
	int i, j;
	for(i=0; i<n; i++){
		if(a[i]%2==0) 
			numberOfEvens++;
		else
			numberOfOdds++;
	}
		
	j=0;
	if(numberOfOdds!=0){
		int *b=(int *)calloc(numberOfOdds, sizeof(int));
		for(i=0; i<n; i++){
			if(a[i]%2!=0){
				b[j]=a[i];
				j++;
			} 
		}			
		ascBubbleSort(b, numberOfOdds);
		output(b, numberOfOdds);
		free(b);
	}
	
	j=0;
	if(numberOfEvens!=0){
		int *c=(int *)calloc(numberOfEvens, sizeof(int));
		for(i=0; i<n; i++){
			if(a[i]%2==0){
				c[j]=a[i];
				j++;
			}
		}
		ascBubbleSort(c, numberOfEvens);
		output(c, numberOfEvens);
		free(c);
	}	
}
	
int main(){
	int *a, n;
	printf("n= ");
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	input(a, n);
	printf("\nOUTPUT:\n");
	printNum_Odd_Even(a, n);
	free(a);
	return 0;
}

