#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(){
	system("cls");
	fflush(stdin);
	
/*	
	char c, d;
	int countfull = 0, check = 0, n;
	int x, i;
	int s[110];
	gets(s);
	n = strlen(s);
	for(i=0; i<n; i++){
		check++;
		if(check == 1){
			if(s[i] == 'h'){
				x = 1;
			}else x = 0;
		}
		if(s[i] == ' '){
			if(x == 1){
				if(d == 'g') countfull++;
			}
			check = 0;
			x = 0;
		}
		d = s[i];
	d=s[3];
	printf(" %c ", d);
	printf("%d", countfull);
	
	}*/

	int h, i ,j;
    scanf("%d", &h);
 	printf("\nOUTPUT:\n");
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
        
    }
}
