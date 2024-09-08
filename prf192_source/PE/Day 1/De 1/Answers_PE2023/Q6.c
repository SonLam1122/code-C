#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
int main(){
	char s[256];
	int L;
	//fflush(stdin);
	gets(s);
	//L=strlen(s);
	if(L<=100){
		strupr(s);
		printf("\nOUTPUT:\n");
		//puts(s);
	}
	getchar();
	return 0;
}

