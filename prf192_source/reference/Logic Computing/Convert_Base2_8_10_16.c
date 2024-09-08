#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int getUserChoice(){
	int choice;
	printf("\n-----------------------------");
	printf("\n1. Convert base10 to base 2, 8, 16");
	printf("\n2. Convert base2 to base 8, 10, 16");
	printf("\n3. Convert base8 to base 2, 10");
	printf("\n4. Convert base16 to base 2, 10");
	printf("\nChoose: ");
	scanf("%d%*c", &choice);
	return choice;
}

int LenNumCnt(int x){
	int cnt=0;
	while(x!=0){
		x=x/10;
		cnt++;
	}
	return cnt;
}

int ConvertBase10toBase2_8_16(){
	int x, n, binaryD=0, i=1;
	printf("\nEnter your number in base-10: ");
	scanf("%d", &x);
	assert(x>=0);
	n=x;
	while(n>0){
		binaryD+=(n%2)*i;
		n/=2;
		i*=10;
	}
	printf("\nNumber %d (base-10) in Binary: %d", x, binaryD);
	printf("\nNumber %d (base-10) in Octal: %o", x, x);
	printf("\nNumber %d (base-10) in Hexa: %X", x, x);
	return 0;
}

double exponential_ab(int a, int b){
	assert(a>=0);
	assert(b>=0);
	if (b==0) return 1;
	int i;
	double Luythua=1.0;
	for(i=1; i<=b; i++)
		Luythua *= a;
	return Luythua;
}

int ConvertBase2toBase8_10_16(){
	int x, n, decimalB=0, i=1;
	int keepreading=1;
	printf("\nEnter your number in base-2: ");
	scanf("%d", &x);
	assert(x>=0);
	n=x;
	while(n>0 && keepreading==1){
		i=n%10;
		if((i!=0) && (i!=1))
			keepreading=0;
		n/=10;
	}
	if(keepreading==0){
		printf("\nGiven number is not binary format!");
		return 0;
	}
	n=x;
	i=0;
	while(n>0){
		decimalB+=(int)(n%10)*(int)(exponential_ab(2, i));
		n/=10;
		i++;
	}
	printf("\nNumber %d (base-2) in Decimal: %d", x, decimalB);
	printf("\nNumber %d (base-2) in Octal: %o", x, decimalB);
	printf("\nNumber %d (base-2) in Hexa: %X", x, decimalB);
	return 0;
}	

int ConvertBase8toBase10_2(){
	int x, n, binaryO=0, octalO=0, i=1;
	int keepreading=1;
	printf("\nEnter your number in base-8: ");
	scanf("%d", &x);
	assert(x>=0);
	n=x;
	while(n>0 && keepreading==1){
		i=n%10;
		if(i>=8)
			keepreading=0;
		n/=10;
	}
	if(keepreading==0){
		printf("\nGiven number is not octal format!");
		return 0;
	}
	n=x;
	i=0;
	while(n>0){
		octalO+=(int)(n%10)*(int)(exponential_ab(8, i));
		n/=10;
		i++;
	}
	n=octalO;
	i=1;
	while(n>0){
		binaryO=binaryO+(n%2)*i;
		n/=2;
		i*=10;
	}
	printf("\nNumber %d (base-8) in Decimal: %d", x, octalO);
	printf("\nNumber %d (base-8) in Binary: %d", x, binaryO);
	return 0;
}

int ConvertBase16toBase10_2(){
	int x, n, digit=0, cnt=0, i=0;
	int binaryX=0, decimalX=0;
	int keepreading=1;
	char c, buf[81];
	printf("\nEnter your number in base-16 without prefix \"0x\": ");
	do {
		c=getchar();
		buf[i]=c;
		if(isxdigit(c))
			keepreading=1;
		else{
			if(c=='\n')
				keepreading=1;
			else
			keepreading=0;
		}
		++i;
	} while((c!='\n') & (keepreading==1));
	buf[i-1]='\0';
	if(keepreading==0){
		printf("\nGiven number is not hexa format!");
		return 0;
	}
	printf("\n%s, len: %d", buf, strlen(buf));
	n=0;
	i=0;
	for(i=strlen(buf)-1;i>=0; i--){
		switch(buf[i]){
			case 'A': 
				digit=10;
				break;
			case 'B': 
				digit=11;
				break;
			case 'C':
				digit=12;
				break;
			case 'D': 
				digit=13;
				break;
			case 'E': 
				digit=14;
				break;
			case 'F': 
				digit=15;
				break;
			default:
				digit=buf[i]-0x30;
		}
		decimalX+=digit*exponential_ab(16, cnt);
		cnt++;
	}
	n=decimalX;
	i=1;
	while(n>0){
		binaryX=binaryX+(n%2)*i;
		n/=2;
		i*=10;
	}
	
	printf("\nNumber %s (base-16) in Decimal: %d", buf, decimalX);
	printf("\nNumber %s (base-16) in Binary: %d", buf, binaryX);
	return 0;
}

int main(){
	int userChoice;
	do {
		userChoice=getUserChoice();
		assert(userChoice>=0);
		switch(userChoice){
			case 1:
				ConvertBase10toBase2_8_16();
				break;
			case 2:
				ConvertBase2toBase8_10_16();
				break;
			case 3:
				ConvertBase8toBase10_2();
				break;
			case 4:
				ConvertBase16toBase10_2();
				break;
			default:
				break;
		}
	} while(userChoice>0 && userChoice<=10);
	fflush(stdin);
	return 0;
}
