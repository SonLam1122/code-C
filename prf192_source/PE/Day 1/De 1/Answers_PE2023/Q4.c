//Ver.1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(){
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	system("cls");
	//fflush(stdin);
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

//Ver.2
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){	
	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, j, n, c=65;
	fflush(stdin);
	scanf("%d", &n);
	char s1[256], temp1[256], temp2[256];
	
	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	s1[0]=(char) c;
	s1[1]='\0';
	printf("%s\n", s1);
	c++;
	for(i=1; i<n; i++){
		s1[i]=(char) c;
		for(j=0; j<=i; j++) 
			temp1[j]=s1[j];
		temp1[j]='\0';
		
		for(j=0; j<=i-1; j++) 
			temp2[j]=s1[j];
		temp2[j]='\0';
		
		strrev(temp2);
		strcat(temp1, temp2);
		printf("%s\n", temp1);
		c++;
	}
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
*/
//Ver. 3
/*#include<stdio.h>
 
int main() {
    int i, j, rows, count=0;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for (i = 0; i < 2*rows; i=i+2) {
        for (j = 0; j <= i; j++) {
            printf("%c", 'A'+count);
            if(j < i/2)
                count++;
            else
                count--;
        }
        count = 0;
        printf("\n");
    }
    return(0);
}*/

