#include <stdio.h>
int main(){
    int x[] = {1, 2, 3, 4, 5};

    int u;

    int *ptr = x;

    *(ptr+3) = 10;

    for(u=0;u<5;u++){
        printf("%d-", x[u]);

    }

    printf( "\n" ); 
}
