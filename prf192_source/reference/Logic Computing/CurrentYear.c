#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);
	int currentYear, yearOfBirth, currentAge;
	currentYear=tm.tm_year + 1900;
  	printf("Current Year: %d", currentYear);
  	printf("\nNow: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("\nYear of Birth: ");
	scanf("%d", &yearOfBirth);
	currentAge=currentYear-yearOfBirth;
	if(currentAge<0 || currentAge>150){
		printf("\nCurrent age: %d;", currentAge);
		printf("\nBan la 1 con yeu tinh;");
	}
	else
		printf("\nCurrent age: %d;", currentAge);
getch();
return 0;
}
