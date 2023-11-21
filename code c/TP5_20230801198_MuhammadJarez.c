#include <stdio.h>

int main()
{
    int menu;
    int a, b, c;// Buat trapesium
    int k, l, tall; // jam pasir
    int i, j, tinggi;// huruf m

menu:
    system("cls");
    printf("=================================\n");
    printf("+       Belajar Menggambar      +\n");
    printf("=================================\n");
    printf("\n");
    printf("Menu :\n");
    printf("1. Trapesium\n");
    printf("2. Jam Pasir\n");
    printf("3. Huruf M\n");
    printf("4. Keluar\n");
    printf("\nPilihan : ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        system("cls");
        printf("===================================\n");
        printf("+       Menggambar Trapesium      +\n");
        printf("===================================\n");

        printf("Input Angka yang Diinginkan : ");
        scanf("%d", &c);

        for (b = 1; b <= (c - 1); b++)
        {
            for (a = (c - 2); a >= b; a--)
            {
                printf("   ");
            }
            for (a = 0; a <= b; a++)
            {
                printf(" * ");
            }
            for (a = c; a >= 1; a--)
            {
                printf(" ^ ");
            }
            for (a = 0; a <= b; a++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        getch();
        goto menu;

    case 2:

        system("cls");
        printf("====================================\n");
        printf("+       Menggambar Jam Pasir       +\n");
        printf("====================================\n");

        printf("Masukkan tinggi pola (bilangan ganjil): ");
        scanf("%d", &tall);

        if (tall % 2 == 0)
        {
            printf("Tinggi harus merupakan bilangan ganjil.\n");
            getch();
            goto menu; // Keluar dari program dengan kode kesalahan
        }

        for (k = 1; k <= tall - (1 + k); k++)
        {
            // Cetak karakter '*' atau '-' sesuai dengan indeks baris
            for (l = 1; l <= tall; l++)
            {
                if (k <= tall / 2)
                {
                    if (l == 1 || l == tall || k == 1)
                    {
                        printf(" *");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }

        for (k = 0; k < tall; k++)
        {
            // Mencetak tanda minus (-)
            for (l = 0; l < k; l++)
            {
                printf(" ");
            }

            // Mencetak tanda minus (-)
            for (l = 0; l < tall - k; l++)
            {
                printf(" -");
            }

            printf("\n");
        }

        for (k = tall - 1; k >= 0; k--)
        {
            // Mencetak tanda minus (-)
            for (l = 0; l < k; l++)
            {
                printf(" ");
            }

            // Mencetak tanda minus (-)
            for (l = 1; l <= tall - k; l++)
            {
                printf(" -");
            }
            printf("\n");
        }
        for (k = tall / 2 + 2; k <= tall; k++)
        {
            for (l = 1; l <= tall; l++)
            {
                if (k == tall || l == 1 || l == tall)
                {
                    printf(" *");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        getch();
        goto menu;

    case 3:

        system("cls");
        printf("=================================\n");
        printf("+       Menggambar Huruf M      +\n");
        printf("=================================\n");

        printf("Masukkan tinggi huruf M: ");
        scanf("%d", &tinggi);

        for (i = 0; i < tinggi; i++)
        {
            for (j = 0; j < tinggi * 2 - 1; j++)
            {
                if (j == 0 || j == tinggi * 2 - 2 || (i == j && j <= tinggi - 1) || (j == tinggi * 2 - 2 - i && j >= tinggi))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        getch();
        goto menu;
    
    case 4: 
    system("cls");
        printf("Dadah Gais :)");
        break;

    default :
        printf("HEHE:3");
    }
    return 0;
}