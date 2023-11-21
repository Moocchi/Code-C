#include <stdio.h>

void input_array(float a[], int jumlah_elemen, float *total_nilai) {
    for (int i = 0; i < jumlah_elemen; i++) {
        printf("Masukkan nilai A[%d] : ", i + 1);
        float input_user;
        scanf("%f", &input_user);
        a[i] = input_user;
        *total_nilai += (int)input_user;
    }
}

void output_array(float a[], int jumlah_elemen, float hasil) {
    printf("\n");
    for (int i = 0; i < jumlah_elemen; i++) {
        printf("A[%d]: %.2f\n", i + 1, a[i]);
    }
    printf("Rata - ratanya adalah : %.2f\n", hasil);
}

int main() {
    int jumlah_elemen;
    system("cls");
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &jumlah_elemen);

    float a[jumlah_elemen];
    float total_nilai = 0;

    input_array(a, jumlah_elemen, &total_nilai);
    
    float hasil = total_nilai / jumlah_elemen;

    output_array(a, jumlah_elemen, hasil);

    return 0;
}
