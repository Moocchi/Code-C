#include <stdio.h>

int main() {
    int jumlah_ulangan;
    printf("Masukkan jumlah ulangan: ");
    scanf("%d", &jumlah_ulangan);

    int awal = 1;

    // Perulangan do-while
    do {
        printf("Chrisella\n", awal);
        awal++; // Tingkatkan penghitung
    } while (awal <= jumlah_ulangan);

    return 0;
}
