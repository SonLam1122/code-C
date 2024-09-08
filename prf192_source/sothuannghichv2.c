#include <stdio.h>
#include <string.h>

int main(){
    char n[5];
    scanf("%s",n);
    int l = 0,r = strlen(n)-1;
    while (l<r)
    {
        if(n[l]!=n[r]){
            printf("No");
            return 0;
        }
        ++l;--r;
    }
    printf("Yes");
    
}