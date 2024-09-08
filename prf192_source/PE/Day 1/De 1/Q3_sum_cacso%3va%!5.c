#include <stdio.h>

int main(){
    int a[5];
    int i;
    int sum = 0;
    for(i=0; i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0; i<5;i++){
        if(a[i]%3==0 && a[i]%5!=0){
            sum += a[i];
        }
    }
    printf("OUTPUT: \n%d",sum);

}