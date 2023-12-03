void ambil_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    printf("\nMasukkan nilai untuk matriks %dx%d:\n", jumlah_baris, jumlah_kolom);
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf("Masukkan nilai untuk elemen (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
}

void tambah_matriks(int jumlah_baris, int jumlah_kolom, int matriks1[][jumlah_kolom], int matriks2[][jumlah_kolom], int hasil_matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            hasil_matriks[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void tampilkan_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf(" %d |", matriks[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


void pertambahan() {

    int jumlah_baris1, jumlah_kolom1;
    system("cls");
    printf("----------- P E N J U M L A H A N-----------\n");
    printf("Masukkan jumlah baris untuk Matriks 1: ");
    scanf("%d", &jumlah_baris1);
    printf("Masukkan jumlah kolom untuk Matriks 1: ");
    scanf("%d", &jumlah_kolom1);

    int jumlah_baris2, jumlah_kolom2;
    printf("\nMasukkan jumlah baris untuk Matriks 2: ");
    scanf("%d", &jumlah_baris2);
    printf("Masukkan jumlah kolom untuk Matriks 2: ");
    scanf("%d", &jumlah_kolom2);

    if (jumlah_baris1 != jumlah_baris2 || jumlah_kolom1 != jumlah_kolom2) {
        printf("\nMatriks tidak dapat ditambahkan. Dimensi berbeda.\n");
        return 0;
    }

    int matriks1[jumlah_baris1][jumlah_kolom1];
    int matriks2[jumlah_baris2][jumlah_kolom2];
    int hasil_matriks[jumlah_baris1][jumlah_kolom1];

    printf("\nMatriks 1:\n");
    ambil_matriks_dari_pengguna(jumlah_baris1, jumlah_kolom1, matriks1);

    printf("\nMatriks 2:\n");
    ambil_matriks_dari_pengguna(jumlah_baris2, jumlah_kolom2, matriks2);

    tambah_matriks(jumlah_baris1, jumlah_kolom1, matriks1, matriks2, hasil_matriks);

    printf("\nMatriks 1:\n");
    tampilkan_matriks(jumlah_baris1, jumlah_kolom1, matriks1);

    printf("\n+\n");

    printf("\nMatriks 2:\n");
    tampilkan_matriks(jumlah_baris2, jumlah_kolom2, matriks2);

    printf("\n\nHasil Matriks:\n");
    tampilkan_matriks(jumlah_baris1, jumlah_kolom1, hasil_matriks);
    
}
