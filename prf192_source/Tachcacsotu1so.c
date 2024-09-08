#include <stdio.h>

int main() {
    int num, digit, reversedNum = 0;

    printf("Nhap so: ");
    scanf("%d", &num);

    //printf("Cac chu so trong so %d la: ", num);
    do
    {
        digit = num % 10; 
        //printf("%d ", digit);
        reversedNum = reversedNum *10 + digit;
        num /= 10;
    } while (num != 0);

    printf("%d ", reversedNum);
}