#include <stdio.h>

int main(){
    int i;
    int a[3];
    int max = 0;

    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("OUTPUT: \n%d",max);
}