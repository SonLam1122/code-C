#include <stdio.h>

int main(){
    int i,j;
    int n;

    scanf("%d",&n);

    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
}