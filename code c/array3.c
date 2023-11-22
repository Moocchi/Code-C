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

    int lima[100];
    int count = 0;

    for (int i = 0; i < jumlah_angka; i++) {
        if (a[i] == 5) {
            lima[count++] = i + 1;
        }
    }

    printf("\n");
    printf("Jumlah Inputan 5 ada        : %d\n", count);
    printf("Array Berisi angka 5 ada di : ");
    
    for (int i = 0; i < count; i++) {
        printf("%d", lima[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }

    return 0;
}
