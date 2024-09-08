#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void input(double *a, int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%lf", &a[i]);
}

double avg(double *a, int n){
	if(n>0){
		int i;
		double s=0.0;
		for(i=0; i<n; i++)
			s+=a[i];
		return s/n;
	}
	else return 0;	
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  double a[n];
  input(a, n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%.3lf", avg(a, n));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
