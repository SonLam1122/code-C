#include <stdio.h>

int main(){
    double pi = 3.141593;
    int r;
    double s,v;

    printf("Nhap ban kinh hinh cau: ");
    scanf("%d",&r);
    s = 4*pi*r*r;
    v = 4/3*(pi*r*r*r);
    printf("OUTPUT: \n");
    printf("S = %.3lf\n",s);
    printf("V = %.3lf",v);

    return 0;

}