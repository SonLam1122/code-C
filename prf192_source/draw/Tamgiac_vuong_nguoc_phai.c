#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Nhap so hang cua tam giac vuong nguoc: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // In ra khoảng trắng để dịch chuyển tam giác sang phải
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // In ra dấu '*' trên mỗi hàng
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
