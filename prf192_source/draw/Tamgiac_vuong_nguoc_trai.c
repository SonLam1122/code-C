#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Nhap so hang cua tam giac vuong nguoc: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        // In ra dấu '*' trên mỗi hàng
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
