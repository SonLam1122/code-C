#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i,j;
    printf("Cac phan tu xuat hien trong mang 1 ma khong co trong mang 2 la: ");
    int found;
    for ( i = 0; i < n1; i++) {
        found = 0;
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
    printf("\n");

    return 0;
}
