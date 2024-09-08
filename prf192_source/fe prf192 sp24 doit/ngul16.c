#include <stdio.h>


void foo(int *p, int q) {
    *p=*p**p;
    q = q*q;
}

int main() {
int p=3,q=4;
foo(&p, q);
printf("%d %d",p,q);
printf("\n");
return 0;

}

