#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int CountDigit(int x){
    int count = 0;
    while (x > 0){
        x /= 10;
        ++count;
    }
    return count;
}

int kTraArmstrong(int x){
	int numDigit = CountDigit(x);
    int tmp = x, sum = 0, last;
    while (tmp > 0){
        last = tmp % 10; 
        tmp /= 10;       
        sum += pow(last, numDigit);
    }
    if (sum == x)
        return 1;
    return 0;
}

int main(){
	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int x;
	scanf("%d", &x);
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:

	if (kTraArmstrong(x))
		printf("%d is amstrong number", x);
	else
		printf("%d is not amstrong number", x);
	getchar();
	return 0;
}

