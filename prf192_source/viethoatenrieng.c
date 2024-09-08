#include <stdio.h>
#include <ctype.h> // Để sử dụng hàm toupper()

void capitalizeFirstLetter(char *word) {
    // Nếu ký tự đầu tiên của từ là chữ cái, chuyển đổi thành chữ hoa
    if (isalpha(word[0])) {
        word[0] = toupper(word[0]);
    }
}

int main() {
    char word[100];
    printf("Nhap mot tu: ");
    scanf("%s", word);

    // Gọi hàm capitalizeFirstLetter() để viết hoa chữ đầu tiên
    capitalizeFirstLetter(word);

    printf("Tu sau khi viet hoa chu dau tien: %s\n", word);

    return 0;
}
