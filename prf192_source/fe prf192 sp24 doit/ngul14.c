#include <stdio.h>

int main(){
    int a[26],t;

a[0]=100;

a[25]=200;

t=a[25];

a[25]=a[0];

*a = t;

printf("%d %d", a[0],a[25]); 
}