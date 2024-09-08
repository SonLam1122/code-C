#include <stdio.h>
#include <math.h>

void toado(double diem[]){
    int i;
    for (i = 0; i<2; i++){
        scanf("%lf",&diem[i]);
    }
}

int main(){
    double a[50],b[50];
    double khoangcanh,temp;

    printf("Nhap diem 1: ");
    toado(a);
    printf("Nhap diem 2: ");
    toado(b);

    temp = (b[0] - a[0])*(b[0] - a[0]) + (b[1] - a[1])*(b[1] - a[1]);
    khoangcanh = sqrt(temp);

    printf("Khoang canh 2 diem la: %.3lf",khoangcanh);

}