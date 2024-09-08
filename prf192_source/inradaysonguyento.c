#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Không phải số nguyên tố
    }
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Không phải số nguyên tố
        }
    }
    return 1; // là số nguyên tố
}

int main() {
    int n;
    printf("Nhập một số nguyên dương n: ");
    scanf("%d", &n);

    printf("Các số nguyên tố từ 2 đến %d là: ", n);
    int i;
    for (i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
