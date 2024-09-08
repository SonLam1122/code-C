#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiểm tra n có phải là số nguyên dương không
    if (n <= 0) {
        printf("So luong phan tu khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Khai báo mảng
    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // In ra các phần tử không giống nhau
    printf("Cac phan tu khong trung nhau la:\n");
    for (int i = 0; i < n; i++) {
        int j;
        // Kiểm tra xem phần tử thứ i đã xuất hiện trước đó chưa
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                break;
        }
        // Nếu phần tử không giống nhau với các phần tử trước đó thì in ra
        if (i == j)
            printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
