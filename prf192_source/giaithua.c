#include <stdio.h>

// Hàm tính giai thừa
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    int i;
    for ( i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("So nhap vao khong hop le.\n");
        return 1;
    }

    unsigned long long fact = factorial(num);
    printf("Giai thua cua %d la: %llu\n", num, fact);

    return 0;
}
