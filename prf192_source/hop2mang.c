#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArr[n1 + n2];
    int mergedSize = 0; // Kích thước của mảng hợp
    int i,j;
    // Sao chép tất cả các phần tử của mảng thứ nhất vào mảng hợp
    for ( i = 0; i < n1; i++) {
        mergedArr[mergedSize++] = arr1[i];
    }

    // Sao chép tất cả các phần tử của mảng thứ hai vào mảng hợp nếu chúng không tồn tại trong mảng hợp
    for ( i = 0; i < n2; i++) {
        int found = 0;
        for ( j = 0; j < mergedSize; j++) {
            if (arr2[i] == mergedArr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            mergedArr[mergedSize++] = arr2[i];
        }
    }

    // Hiển thị mảng hợp
    printf("Mang hop cua hai mang la: ");
    for ( i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
