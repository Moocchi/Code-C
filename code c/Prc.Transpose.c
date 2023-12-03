void tarik_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    printf("\nMasukkan nilai untuk matriks %dx%d:\n", jumlah_baris, jumlah_kolom);
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf("Masukkan nilai untuk elemen (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
}

void transpose_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom], int hasil_transpose[][jumlah_baris]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            hasil_transpose[j][i] = matriks[i][j];
        }
    }
}

void tunjuk_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        printf("|");
        for (int j = 0; j < jumlah_kolom; j++) {
            printf(" %d |", matriks[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void Transpose() {
    system("cls");

    int jumlah_baris, jumlah_kolom;

    system("cls");
    printf("----------- T R A N S P O S E -----------\n");
    printf("Masukkan jumlah baris untuk Matriks: ");
    scanf("%d", &jumlah_baris);
    printf("Masukkan jumlah kolom untuk Matriks: ");
    scanf("%d", &jumlah_kolom);

    int matriks[jumlah_baris][jumlah_kolom];
    int hasil_transpose[jumlah_kolom][jumlah_baris];

    printf("\nMatriks:\n");
    take_matriks_dari_pengguna(jumlah_baris, jumlah_kolom, matriks);

    transpose_matriks(jumlah_baris, jumlah_kolom, matriks, hasil_transpose);

    printf("\nMatriks:\n");
    show_matriks(jumlah_baris, jumlah_kolom, matriks);

    printf("\nTranspose Matriks:\n");
    show_matriks(jumlah_kolom, jumlah_baris, hasil_transpose);

    return 0;
}

