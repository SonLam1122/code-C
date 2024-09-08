#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPower2(int a){
	int base2=2;
	int n=1;
	while(base2<a){
		base2*=2; //base = base * 2
		n++;
	}
	if(base2!=a) return 0;
	return n;
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a;
	scanf("%d", &a);
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if(isPower2(a))
		printf("%d", isPower2(a));
	else
		printf("%d is not a power of 2", a);
  
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
