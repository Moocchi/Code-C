#include <stdio.h>

int main() {
    int baris, i, j;

    printf("massukan jumlah baris : ");
    scanf("%d", &baris);

    for (i = 1; i <= 2 * baris - 1; i++) {
        int maximal = (i <= baris) ? i : 2 * baris - i;
        for (j = 1; j <= maximal; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
