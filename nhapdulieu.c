#include <stdio.h>

int main() {
    FILE *file; // Khai báo con trỏ tới file
    char data[100]; // Mảng để lưu trữ dữ liệu đọc từ file

    // Mở file để đọc
    file = fopen("data.txt", "r");
    
    // Kiểm tra xem file có tồn tại không
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; // Thoát chương trình nếu không mở được file
    }

    // Đọc dữ liệu từ file và xuất ra màn hình
    printf("Noi dung cua file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    
    // Đóng file
    fclose(file);

    return 0;
}
