#include <stdio.h>

int main() {
    FILE *file; // Khai báo con trỏ tới file

    // Mở file để ghi
    file = fopen("data.txt", "w");
    
    // Kiểm tra xem file có tồn tại không
    if (file == NULL) {
        printf("Không thể mở file.\n");
        return 1; // Thoát chương trình nếu không mở được file
    }

    // Nhập dữ liệu từ bàn phím và ghi vào file
    char data[100];
    printf("Nhập dữ liệu để ghi vào file (ấn Enter để kết thúc):\n");
    while (1) {
        fgets(data, sizeof(data), stdin);
        if (data[0] == '\n') // Nếu dòng nhập chỉ là ký tự xuống dòng thì dừng việc ghi vào file
            break;
        fprintf(file, "%s", data);
    }
    
    // Đóng file
    fclose(file);

    printf("Dữ liệu đã được ghi vào file.\n");

    return 0;
}
