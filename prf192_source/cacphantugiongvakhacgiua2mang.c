#include <stdio.h>

int main() {
    int n1, n2;
    int i,j;

    // Nhập số lượng phần tử của mảng 1
    printf("Nhap so luong phan tu cua mang 1: ");
    scanf("%d", &n1);

    // Kiểm tra n1 có phải là số nguyên dương không
    if (n1 <= 0) {
        printf("So luong phan tu cua mang 1 khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Nhập các phần tử của mảng 1
    int arr1[n1];
    printf("Nhap cac phan tu cua mang 1:\n");
    for ( i = 0; i < n1; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    // Nhập số lượng phần tử của mảng 2
    printf("\nNhap so luong phan tu cua mang 2: ");
    scanf("%d", &n2);

    // Kiểm tra n2 có phải là số nguyên dương không
    if (n2 <= 0) {
        printf("So luong phan tu cua mang 2 khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Nhập các phần tử của mảng 2
    int arr2[n2];
    printf("Nhap cac phan tu cua mang 2:\n");
    for ( i = 0; i < n2; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // In ra các phần tử giống nhau giữa hai mảng
    printf("\nCac phan tu giong nhau giua hai mang la:\n");
    for ( i = 0; i < n1; i++) {
        for ( j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    // In ra các phần tử khác nhau giữa hai mảng
    printf("\nCac phan tu khac nhau giua hai mang la:\n");
    for ( i = 0; i < n1; i++) {
        int found = 0;
        for ( j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr1[i]);
        }
    }
    for ( i = 0; i < n2; i++) {
        int found = 0;
        for ( j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr2[i]);
        }
    }

    printf("\n");

    return 0;
}
