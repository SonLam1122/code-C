#include <stdio.h>

int main(){
    int n;
    int i,tang=0;
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        tang = tang * 10 + i;
    }
    for (i=n-1;i>0;i--){
        tang = tang * 10 + i;
    }
    printf("%d",tang);

}