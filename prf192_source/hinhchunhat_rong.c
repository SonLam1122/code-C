#include <stdio.h>

int main() {
    int width, height;

    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%d", &width);

    printf("Nhap chieu cao cua hinh chu nhat: ");
    scanf("%d", &height);
    int i,j;
    // Vẽ hình chữ nhật
    for ( i = 0; i < height; i++) {
        for ( j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
