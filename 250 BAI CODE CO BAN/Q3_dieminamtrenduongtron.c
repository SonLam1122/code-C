#include <stdio.h>
#include <math.h>

void toado(double diem[]){
    int i;
    for (i = 0; i<2; i++){
        scanf("%lf",&diem[i]);
    }
}

int main(){
    double a[50],b,c[50];
    double khoangcanh,temp1;

    printf("Nhap diem Tam: ");
    toado(a);
    printf("Nhap Ban kinh: ");
    scanf("%lf",&b);
    printf("Nhap diem M: ");
    toado(c);

    temp1 = (c[0] - a[0])*(c[0] - a[0]) + (c[1] - a[1])*(c[1] - a[1]);
    khoangcanh = sqrt(temp1);

    if(b < khoangcanh){
        printf("Diem nam ngoai duong tron");
    }else if(b = khoangcanh){
        printf("Diem nam tren duong tron");
    }else{
        printf("Diem nam trong duong tron");
    }
    return 0;
}