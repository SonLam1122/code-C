#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Chuoi ky tu";
    int i = 0;

    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("Chuoi sau khi viet hoa: %s\n", str);

    return 0;
}
