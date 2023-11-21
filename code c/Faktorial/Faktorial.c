#include "lib.Faktorial.h"
#include "prc.faktorial.c"

void main()
{
    system("cls");
    int angka;
    printf("==========| | Program Menghitung Faktorial | |==========\n");
    printf("Input angka  : ");
    if (scanf("%d", &angka) != 1)
    {
        printf("Angka Bos Bukan Karakter....\n");
        // return 1; // Keluar dengan kode kesalahan
    }
    if (angka < 0)
    {
        printf("Ga Bisa Atuh Aa Kalau Nilainya Negatif Mah............\n");
    }
    if (angka > 31)
    {
        printf("Gabsa mang kebanyakan nanti error h3h3");
    }
    else
    {
        printf("===========================================================\n");
        printf("Faktorial\n");
        printf("===========================================================\n");
        faktorial(angka);
    }
    getchar();

    return 0;
}