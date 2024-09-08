#include <math.h>
#include <stdio.h>
#include <assert.h>

int main(){
	// y = ax2+bx+c
	printf("\nPhuong trinh bac 2: y=ax2+bx+c");
	int a, b, c;
	double x1, x2, x, delta;
	printf("\nNhap a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a==0 && b==0 && c==0) {
		printf("\nPt vo so nghiem.");
		return 0;
	}
	else if(a==0 && b==0 && c!=0){
		printf("\nPt vo nghiem.");
		return 0;
	}
	else if(a==0){
		printf("\nPt 1 nghiem x=%.2lf", (-1.0*b)/c);
		return 0;
	} 
	else{
		delta=b*b-4*a*c;
		printf("\nDelta= %.2lf", delta);
		if(delta<0) printf("\nPtrinh vo nghiem!");
		else if(delta==0) printf("\nNghiem kep x=%.2lf", (-1.0*b)/(2*a));
		else{
			x1=((-1.0*b)-sqrt(delta))/(2*a);
			x2=((-1.0*b)+sqrt(delta))/(2*a);
			printf("\nNghiem x1=%.2lf", x1);
			printf("\nNghiem x2=%.2lf", x2);
		}
	}
	return 0;
}
