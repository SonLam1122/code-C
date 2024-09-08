#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int n;
    scanf("%d",&n);
    int i,kq = 1;
    for(i=1;i<=n;i++){
        kq = kq*x;
    }
    printf("%d",kq);

}