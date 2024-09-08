#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	system("cls");
	fflush(stdin);
	int rows, i ,j;
    scanf("%d", &rows);
   
    // Fixed Do not edit anything here.
 	printf("\nOUTPUT:\n");
 	
 	//@STUDENT: WRITE YOUR OUTPUT HERE:
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++) 
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--) 
            printf("%c", 'A' + j - 1);
        printf("\n"); 
    }
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

