#include <stdio.h>

int main(){
    int a[100];
    int i,j,n,dem;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int luu = 0;
    for(i=0;i<n;i++){
        if(a[i] > 0 && a[i+1] < 0 || a[i] < 0 && a[i+1] > 0){
            dem = 1;
            luu += dem;
        }else{
            dem = 0;
        }
        
    }
    printf("OP: %d",luu);
}