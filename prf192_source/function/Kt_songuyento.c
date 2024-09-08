#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;  // Assuming number is prime unless proven otherwise

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Algorithm to check for prime number
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for(i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;  // Number is divisible by another number, so it's not prime
                break;
            }
        }
    }

    return 0;
}
// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int n) {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int number;
//     printf("Nhap mot so nguyen duong: ");
//     scanf("%d", &number);

//     if (isPrime(number))
//         printf("%d la so nguyen to.\n", number);
//     else
//         printf("%d khong phai la so nguyen to.\n", number);

//     return 0;
// }
