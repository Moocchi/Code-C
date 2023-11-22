#include <stdio.h>

int main() {
    int a[100];
    int ya;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &ya);

    for (int i = 0; i < ya; i++) {
        printf("Masukkan Nilai A[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nArray:\n");
    for (int i = 0; i < ya; i++) {
        printf("A[%d] : %d\n", i + 1, a[i]);
    }

    int total_nilai = 0;
    for (int i = 0; i < ya; i++) {
        total_nilai += a[i];
    }

    float hasil = (float)total_nilai / ya;
    printf("Rata - ratanya adalah : %.2f\n", hasil);

    return 0;
}
