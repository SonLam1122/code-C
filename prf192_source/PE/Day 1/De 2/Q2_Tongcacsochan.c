#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n=6, i, *a, Sum=0;
	a=(int *)calloc(n, sizeof(int));
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i]%2==0)
			Sum+=a[i];
	}
  
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d", Sum);
  	free(a);

  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
