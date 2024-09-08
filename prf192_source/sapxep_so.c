#include <stdio.h>

void sapxep(int a[],int n){
    int i,j,temp;
    for (i=0;i<n-1;i++){
        for(j = 0; j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int a[100];
    int i;
    int n;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sapxep(a,n);
    for (i = 0; i<n; i++){
        printf("%d",a[i]);
    }
}