#include <stdio.h>

int main() {
    int a[100];
    int jumlah_angka;

    printf("Masukkan banyak angka: ");
    scanf("%d", &jumlah_angka);

    for (int i = 0; i < jumlah_angka; i++) {
        int masukkan_angka;
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &masukkan_angka);
        a[i] = masukkan_angka;
    }

    int besar = a[0];
    int kecil = a[0];


    for (int i = 1; i < jumlah_angka; i++) {
        if (a[i] > besar) {
            besar = a[i];
        }
        if (a[i] < kecil) {
            kecil = a[i];
        }
    }

    printf("\nArray a berisi angka: ");
    for (int i = 0; i < jumlah_angka; i++) {
        printf("%d", a[i]);
        if (i < jumlah_angka - 1) {
            printf(", ");
        }
    }

    printf("\n");
    printf("Nilai Maximum nya adalah : %d\n", besar);
    printf("Nilai Minimum nya adalah : %d\n", kecil);

    return 0;
}
