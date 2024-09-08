#include <stdio.h>

int main(){
    int i;
    int n;
    int a[n];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i = 0; i<n;i++){
        if(a[i]%2==0){
            a[i] = a[i]*a[i];
        }
    }
    printf("OUTPUT: \n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d\n",a[i]);
        }
    }

}