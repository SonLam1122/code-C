#include <stdio.h>

// Hàm tính ước chung lớn nhất (UCLN)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính bội chung nhỏ nhất (BCNN)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Nhap vao hai so nguyen duong: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Hai so nhap vao khong hop le.\n");
        return 1;
    }

    int ucln = gcd(num1, num2);
    int bcnn = lcm(num1, num2);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, ucln);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", num1, num2, bcnn);

    return 0;
}
