#include <stdio.h>
#include <stdlib.h>
#ifndef MATRIX_PRC_H
#define MATRIX_PRC_H

void ambil_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]);
void tambah_matriks(int jumlah_baris, int jumlah_kolom, int matriks1[][jumlah_kolom], int matriks2[][jumlah_kolom], int hasil_matriks[][jumlah_kolom]);
void tampilkan_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]);

void take_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]);
void kurangi_matriks(int jumlah_baris, int jumlah_kolom, int matriks1[][jumlah_kolom], int matriks2[][jumlah_kolom], int hasil_matriks[][jumlah_kolom]);
void show_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]);

void tarik_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]);
void transpose_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom], int hasil_transpose[][jumlah_baris]);
void tunjuk_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]);

#endif

