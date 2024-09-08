#include <math.h>
#include <stdio.h>

int USCLN(int val1, int val2){
	while(val1!=val2){
		if (val1>val2)
			val1-=val2;
		else val2-=val1;
	}
	return val1;
}

int BSCNN(int val1, int val2){
	if(val1==val2) return val1;
	return (val1*val2)/USCLN(val1, val2);
}

int main(){
	int num1, num2;
	printf("\nEnter num1, num2: ");
	scanf("%d %d", &num1, &num2);
	printf("\nUSCLN: %d; BSCNN: %d.", USCLN(num1, num2), BSCNN(num1, num2));
	return 0;
}
