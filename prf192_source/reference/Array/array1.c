#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100
char str[255];

void input(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void output(int *a, int n){
	int i, max, min, S=0;
	max=min=a[0];
	for(i=0; i<n; i++){
		printf("a[%d] = %d\n", i, a[i]);
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		S+=a[i];
	}
	printf("\nMin= %d; Max= %d; Sum= %d", min, max, S);
}

void print_Even(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		if(a[i]%2==0) printf("%d ", a[i]);
}

void print_Odd(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		if(a[i]%2!=0) printf("%d ", a[i]);
}

int firstLinearSearch(int x, int a[], int n){
	int i, pos;
	char buffer[256];
	char tmp[2]=" ";
	for(i=0; i<n; i++){
		if(a[i]==x){
			if(itoa(i, buffer, 10)!=NULL){
				strcat(str, buffer);
				strcat(str, tmp);
				pos=i;
				buffer[0]="\0";
			}
		}
	}
	i=strlen(str)-1;
	while(str[i]==' ') i--;
	str[i+1]='\0';
	if(pos>=0) return pos;
	return -1;
}

int main(){
	int *a, n, x;
	printf("Enter number elements of array: ");
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	printf("\n");
	input(a, n);
	printf("\n------------------ Output ------------------\n");
	output(a, n);
	printf("\nEven numbers in array: ");
	print_Even(a, n);
	printf("\nOdd numbers in array: ");
	print_Odd(a, n);
	printf("\nFind x: ");
	scanf("%d", &x);
	if(firstLinearSearch(x, a, n)!=-1){
		printf("\nVi tri tim thay %d trong array: %s", x, str);
	}
	free(a);
	return 0;
}
