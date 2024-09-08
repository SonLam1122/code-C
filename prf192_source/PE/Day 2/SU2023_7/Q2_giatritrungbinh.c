#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double a[n];
    int i;
    double sum = 0,tb;
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum += a[i];
    }
    tb = sum/n;
    printf("OUTPUT: \n%.3lf",tb);
}