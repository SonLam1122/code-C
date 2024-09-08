#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long rev = 0, m = n;

    while (n!=0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev == m){
        printf("Yes");
    }else{
        printf("NO");
    }
    return 0;
}