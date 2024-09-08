#include <stdio.h>

// Hàm chuyển đổi từ hệ 10 sang hệ 2
void decToBinary(int n) {
    // Khai báo một mảng để lưu trữ các chữ số nhị phân
    int binaryNum[32];
    
    // Biến count để đếm số lượng chữ số nhị phân được sinh ra
    int i = 0;
    while (n > 0) {
        // Lấy phần dư của số thập phân và gán vào mảng nhị phân
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // In ra các chữ số nhị phân theo thứ tự đảo ngược
    int j;
    for (j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main() {
    int decNumber;
    
    // Nhập số nguyên dương từ người dùng
    printf("Nhap so nguyen duong he 10: ");
    scanf("%d", &decNumber);
    
    // Kiểm tra nếu số âm thì thông báo lỗi và kết thúc chương trình
    if (decNumber < 0) {
        printf("So khong hop le.\n");
        return 1;
    }
    
    // Gọi hàm chuyển đổi và in ra kết quả
    printf("So %d trong he nhi phan la: ", decNumber);
    decToBinary(decNumber);
    
    return 0;
}
