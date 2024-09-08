#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh để sử dụng cho qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int n1, n2, mergedSize;
    int i;

    // Nhập số lượng phần tử của hai mảng
    printf("Nhap so luong phan tu cua mang 1: ");
    scanf("%d", &n1);

    printf("Nhap so luong phan tu cua mang 2: ");
    scanf("%d", &n2);

    // Nhập các phần tử của hai mảng
    printf("Nhap cac phan tu cua mang 1:\n");
    for ( i = 0; i < n1; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Nhap cac phan tu cua mang 2:\n");
    for ( i = 0; i < n2; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // Gộp hai mảng
    mergedSize = n1 + n2;
    for ( i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    for ( i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    // Sắp xếp mảng mới
    qsort(mergedArr, mergedSize, sizeof(int), compare);

    // Hiển thị mảng sau khi sắp xếp
    printf("Mang sau khi gop va sap xep:\n");
    for ( i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
