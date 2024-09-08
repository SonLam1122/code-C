#include <stdio.h>

int chuaso(int chua[], int n) {
    int max = 1; // Khởi tạo độ dài dãy con tăng là 1
    int i, j;
    for (i = 0; i < n; i++) {
        int dem = 1; // Khởi tạo độ dài dãy con tăng tạm thời là 1
        for (j = i + 1; j < n; j++) {
            if (chua[j] > chua[j - 1]) // Nếu phần tử tiếp theo lớn hơn phần tử trước đó
                dem++; // Tăng độ dài dãy con tăng lên 1
            else
                break; // Ngắt vòng lặp khi không còn tăng nữa
        }
        if (dem > max) // So sánh độ dài dãy con tăng với độ dài lớn nhất hiện tại
            max = dem; // Cập nhật độ dài lớn nhất
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("OUTPUT: %d", chuaso(a, n));

    return 0;
}
