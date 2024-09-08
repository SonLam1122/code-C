#include <stdio.h>

// Hàm kiểm tra mảng là ưu thế chẵn hay lẻ
void checkArray(int arr[], int n) {
    int evenSum = 0, oddSum = 0;
    int i;
    for ( i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i]; // Cộng các phần tử ở vị trí chẵn
        } else {
            oddSum += arr[i]; // Cộng các phần tử ở vị trí lẻ
        }
    }

    if (evenSum > oddSum) {
        printf("Mang co uu the chan.\n");
    } else if (evenSum < oddSum) {
        printf("Mang co uu the le.\n");
    } else {
        printf("Mang khong co uu the chan hoac le.\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    checkArray(arr, n);

    return 0;
}
