#include <stdio.h>

int main() {
    int h;
    int i,j,k;
    scanf("%d", &h);

    printf("\nOUTPUT:\n");
    for ( i = h; i >= 1; i--) {
        for ( j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for ( k = 1; k <= h; k++) {
            printf("* ");//filled
            /*if (k == 1 || k == h || i == h || i == 1) { //hollow
            printf("* ");
            } else {
                printf("  ");
            }*/
        }
        printf("\n");
    }

    return 0;
}
