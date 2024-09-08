#include <math.h>
#include <stdio.h>
#include <assert.h>

int main(){
	// y = ax+b
	printf("\nPhuong trinh bac 1: y=ax+b");
	int a, b;
	double x;
	printf("\nNhap a, b: ");
	scanf("%d %d", &a, &b);
	if(a==0 && b==0) printf("\nPt vo so nghiem");
	else if(a==0) printf("\nPt vo nghiem");
	else printf("x=%.2lf", (-1.0*b)/a);
	return 0;
}
