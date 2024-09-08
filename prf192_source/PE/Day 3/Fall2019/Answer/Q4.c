#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, j, cntSpace;
  scanf("%d", &n);
  cntSpace=n;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=n; i>=1; i--){
  	for(j=n; j>cntSpace; j--)
  		printf(" ");
  	for(j=1; j<=i; j++)
  		printf("%c", '*');
  	cntSpace--;
  	printf("\n");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
