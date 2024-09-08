#include <stdio.h>

int main(){
    double n;

    scanf("%lf",&n);

    if(n>=5 && n<=10){
        printf("Pass with the score: %.2lf",n);
    }
    else{
        printf("Not pass with the score: %.2lf",n);
    }

}