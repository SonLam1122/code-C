#include <stdio.h>

void fibonacciBeforeAndAfter(int n) {
    int before = 0, current = 1, after;

    // Tìm số Fibonacci trước số đã cho
    while (current < n) {
        after = before + current;
        before = current;
        current = after;
    }

    printf("So Fibonacci truoc %d la %d\n", n, before);
    printf("So Fibonacci sau %d la %d\n", n, current);
}

int main() {
    int num;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("So nhap vao khong hop le.\n");
        return 1;
    }

    fibonacciBeforeAndAfter(num);

    return 0;
}
