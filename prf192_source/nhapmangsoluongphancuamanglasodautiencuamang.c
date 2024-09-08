#include <stdio.h>
#include <stdlib.h> // Để sử dụng hàm malloc

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiểm tra n có phải là số nguyên dương không
    if (n <= 0) {
        printf("So luong phan tu khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Cấp phát bộ nhớ động cho mảng
    int *arr = (int*) malloc(n * sizeof(int));

    // Kiểm tra xem bộ nhớ đã được cấp phát thành công chưa
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Hiển thị các phần tử của mảng
    printf("Cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ khi không cần sử dụng nữa
    free(arr);

    return 0;
}
