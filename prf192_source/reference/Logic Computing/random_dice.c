#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int intRandom(int a, int b){
	//min=1; max=6;
	return a+(rand()%b);
}

main(){
	int total, x, y, z;
	long cnt;
	do{
		printf("Total expected: ");
		scanf("%d", &total);
	} while(total<2 || total>12);
	cnt=0;
	//srand(time(0)) phai de ngoai vong lap
	srand(time(0));
	do {
		x=intRandom(1, 6);
		y=intRandom(1, 6);
		z=x+y;
		printf("\nx+y = %d", x+y);
		cnt++;
	}while(z!=total);
	printf("\nYou got total: %d in %d throws!", total, cnt);
	return 0;
}
