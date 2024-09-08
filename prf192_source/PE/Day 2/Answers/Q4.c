#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPrime(int n){
	int i;
	for(i=2; i*i<=n; i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, j, k, value=2;
  scanf("%d", &n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

//Ver.1
  k=2;
  printf("%d\n", k);
  k++;
  for(i=2; i<=n; i++){
  	for(j=1; j<=i; j++){
  		while(!isPrime(k)) k++;
  		printf("%d ", k);
  		k+=2;
	}		
  	printf("\n");
  }
  
/*Ver.2
  for(i=1; i<=n; i++){
  	k=1;
  	for(j=1; j<=i; j++){
  		while(k<=j){
  			if(isPrime(value)){
  				printf("%d ", value);
  				k++;
  				value++;
			}
  			else
  				value++;
		}
	}
  	printf("\n");
  }*/

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
