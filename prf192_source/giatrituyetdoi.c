#include <stdio.h>
#include <stdlib.h> // Để sử dụng hàm abs() và fabs()

int main() {
    int integerNumber;
    float floatingNumber;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &integerNumber);

    printf("Nhap mot so thuc: ");
    scanf("%f", &floatingNumber);

    // Tính giá trị tuyệt đối của số nguyên
    int absoluteInteger = abs(integerNumber);
    // Tính giá trị tuyệt đối của số thực
    float absoluteFloating = fabs(floatingNumber);

    printf("Gia tri tuyet doi cua %d la %d\n", integerNumber, absoluteInteger);
    printf("Gia tri tuyet doi cua %.2f la %.2f\n", floatingNumber, absoluteFloating);

    return 0;
}
