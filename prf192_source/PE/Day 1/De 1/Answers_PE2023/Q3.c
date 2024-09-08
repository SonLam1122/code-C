#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, n=5, S=0, x=3, y=5;
	int a[n];
	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++){
		if(a[i]%x==0 && a[i]%y!=0) 
			S+=a[i];
	}
	printf("%d", S);
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
