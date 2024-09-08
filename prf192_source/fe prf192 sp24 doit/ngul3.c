#include <stdio.h>

int main(){
    int a[5] = { 1, 2, 3, 4, 5 };
    int i, sum = 0;
    for (i = 0; i < 5; i++){
        if(i==2)
            break ;
        sum += a[i];
    }
    printf("%d", sum);
}