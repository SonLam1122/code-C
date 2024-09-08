#include <stdio.h>

void generateFibonacci(int arr[], int n) {
    int i;
    arr[0] = 0; // Fibonacci đầu tiên
    arr[1] = 1; // Fibonacci thứ hai

    // Tính toán và lưu trữ các số Fibonacci vào mảng
    for ( i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

void printArray(int arr[], int n) {
    int i;
    printf("Cac so Fibonacci trong mang la: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap vao so luong phan tu cua mang Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    int fibonacci[n];

    generateFibonacci(fibonacci, n);
    printArray(fibonacci, n);

    return 0;
}
