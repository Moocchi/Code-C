#include "lib.faktorial.h"

void faktorial(angka)
{

    int hasil, i;

    if (angka < 0)
    {
        printf("Ga Bisa Atuh Aa Kalau Nilainya Negatif Mah............\n");
    }
    else
    {
        printf("Faktorial dari %d! adalah: ", angka);
        hasil = 1;
        for (i = angka; i >= 1; i--)
        {
            hasil = hasil * i;

            // untuk menampilkan angka
            printf("%d", i);

            if (i != 1)
            {
                printf(" * ");
            }
        }
        printf(" = %d \n", hasil);
    }
}