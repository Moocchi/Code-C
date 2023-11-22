#include <stdio.h>

int main()
{
    int a[100];
    int jumlah_angka;

    system("cls");
    printf("Masukkan banyak angka: ");
    scanf("%d", &jumlah_angka);

    for (int i = 0; i < jumlah_angka; i++)
    {
        int masukkan_angka;
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &masukkan_angka);
        a[i] = masukkan_angka;
    }

    for (int i = 0; i < jumlah_angka; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Genap array ke-%d adalah: %d\n", i + 1, a[i]);
        }
    }

    return 0;
}
