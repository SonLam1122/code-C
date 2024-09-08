#include <stdio.h>
#include <math.h>

int main() {
    double number;
    printf("Nhap so can tinh can bac hai: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Khong the tinh can bac hai cua so am.\n");
    } else {
        double squareRoot = sqrt(number);
        printf("Can bac hai cua %.2lf la %.2lf.\n", number, squareRoot);
    }

    return 0;
}
