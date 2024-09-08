#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int i,j;
    int temp;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("OUTPUT: \n");
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
        
    }
}