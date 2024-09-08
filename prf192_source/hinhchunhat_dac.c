#include <stdio.h>

int main() {
    int width, height;

    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%d", &width);

    printf("Nhap chieu cao cua hinh chu nhat: ");
    scanf("%d", &height);
    int i,j;
    // Vẽ hình chữ nhật đặc
    for ( i = 0; i < height; i++) {
        for ( j = 0; j < width; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
