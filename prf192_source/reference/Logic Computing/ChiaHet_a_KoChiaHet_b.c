#include <math.h>
#include <stdio.h>

int main(){
	int a, b, i, n, S=0;
	printf("\na, b must be <n. Input a, b, n: ");
	scanf("%d %d %d", &a, &b, &n);
	if(a>=n || b>=n) return 0;
	printf("\nCac so <%d chia het cho %d, ko chia het %d: ", n, a, b);
	for(i=a+1; i<n; i++){
		if(i%a==0 && i%b!=0) {
			printf("%d ", i);
			S+=i;
		}
	}
	printf("\nSum = %d.", S);
	return 0;
}
