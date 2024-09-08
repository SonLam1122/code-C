#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i,j;
    printf("Cac phan tu giao nhau giua hai mang la: ");
    for ( i = 0; i < n1; i++) {
        for ( j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // Đảm bảo không in ra các phần tử trùng lặp
            }
        }
    }
    printf("\n");

    return 0;
}
