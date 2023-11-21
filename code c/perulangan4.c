#include <stdio.h>

int main() {
    int baris, i, j;

    printf("Massukan jumlah baris: ");
    scanf("%d", &baris);

    for (i = 1; i <= baris; i++) {
        // Print spaces
        for (j = 1; j <= baris - i; j++) {
            printf("_");
        }
        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
