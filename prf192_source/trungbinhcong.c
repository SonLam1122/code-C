#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    float average;

    printf("Nhap so luong so trong day: ");
    scanf("%d", &n);

    // Kiểm tra n có phải là số nguyên dương không
    if (n <= 0) {
        printf("So luong so khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }
    int i;
    // Nhập các số vào mảng và tính tổng
    printf("Nhap cac so trong day:\n");
    for ( i = 0; i < n; i++) {
        float num;
        printf("Nhap so thu %d: ", i + 1);
        scanf("%f", &num);
        sum += num;
    }

    // Tính trung bình cộng
    average = sum / n;

    printf("Trung binh cong cua day la: %.2f\n", average);

    return 0;
}
