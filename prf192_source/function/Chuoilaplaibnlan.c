#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *subStr) {
    int count = 0;
    int subLen = strlen(subStr);
    int strLen = strlen(str);
    int i;

    // Lặp qua chuỗi và kiểm tra từng vị trí để xem chuỗi con có tồn tại hay không
    for (i = 0; i <= strLen - subLen; i++) {
        // So sánh chuỗi con tại vị trí i với chuỗi con đã cho
        if (strncmp(&str[i], subStr, subLen) == 0) {
            // Nếu chuỗi con tồn tại, tăng biến đếm lên 1
            count++;
        }
    }

    return count;
}

int main() {
    const char *str = "hello hello hello";
    const char *subStr = "hello";
    int occurrences = countOccurrences(str, subStr);
    printf("Chuoi con '%s' xuat hien %d lan trong chuoi '%s'.\n", subStr, occurrences, str);
    return 0;
}
