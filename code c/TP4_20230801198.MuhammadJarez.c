#include <stdio.h>
int i, j, n;

void logo_valo() {
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf(" *");
        }
        for ( j = 0; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for ( j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf("  ");
        }
        for ( j = 0; j <= 2 * (n - i); j++) {
            printf(" *");
        }
        printf("\n");
    }
}

int main() {
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    logo_valo();

    return 0;
}