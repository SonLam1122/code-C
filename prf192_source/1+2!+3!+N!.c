#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int kq,phantu = 1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            phantu *= j;
        }
        kq += phantu;
        phantu = 1;
    }
    
    printf("%d",kq);
}