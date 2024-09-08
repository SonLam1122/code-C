#include <math.h>
#include <stdio.h>

int main(){
	int val1=1, val2=2, value, i=0, n;
	//n: So chu so can in ra trong day Fibonacci
	printf("\nInput n: ");
	scanf("%d", &n);
	printf("\n%d so dau tien trong day Fibonacci: ", n);
	if(n==1)
		printf("1");
	else if(n==2)
		printf("1 2");
	else{
		printf("\n\n 1\n 2");
		while(i<n-2){
			value=val1+val2;
			val1=val2;
			val2=value;
			printf("\n %d", value);
			i++;
		}
	}
	return 0;
}

