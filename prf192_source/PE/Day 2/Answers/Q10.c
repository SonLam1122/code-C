#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ENTER 10

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i=0, n=8;
  char c, s[n];
  while(c!=ENTER && i<8){
  	c=getchar();
  	if(c=='0' || c=='1'){
  		s[i]=c;
  		i++;
	}
  }
  s[i]='\0';
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  // One-Complement
  for(i=0; i<n; i++)
  	if(s[i]=='1')
  		s[i]='0';
  	else
  		s[i]='1';
  		
  // Two-Complement	
  int carryBit=1;
  for(i=n-1; i>=0; i--){
  	if(s[i]=='1' && carryBit==1){
  		s[i]='0';
		carryBit=1;
	}
	else if(s[i]=='0' && carryBit==1){
		s[i]='1';
		carryBit=0;
	}
	else continue;
  }
  puts(s);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
