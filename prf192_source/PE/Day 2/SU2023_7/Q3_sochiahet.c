#include <stdio.h>

int main(){
    int n,dem = 0,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            dem = dem + 1;
        }
    }
    printf("OUTPUT: \n%d",dem);
}