#include <stdio.h>

int main()
{
    int menu, menuawal;
    char pilihan;

menuawal:
    system("cls");
    printf("\n===Selamat Datang===\n\n");
    printf("1. Menghitung Rata-Rata Bilangan Genap\n");
    printf("2. Menghitung Bintang Angka\n");
    printf("3. Menghitung Kardus Keluar\n");
    printf("4. Keluar\n");

    printf("\nMasukkan Pilihan : ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        system("cls");
        printf("===========================\n");
        printf("Menghitung Rata-Rata Bilangan Genap\n");
        printf("===========================\n\n");

        int jumlah_bilangan, i, jumlah_genap = 0;
        int sum = 0.0;
        int rata_rata;

        printf("Masukkan jumlah bilangan (maksimum 10): ");
        scanf("%d", &jumlah_bilangan);

        if (jumlah_bilangan <= 0 || jumlah_bilangan > 10)
        {
            printf("Jumlah bilangan harus lebih dari 0 dan tidak lebih dari 10.\n");
            goto menuawal;
        }

        printf("\nMasukkan %d bilangan terpisah:\n", jumlah_bilangan);

        for (i = 0; i < jumlah_bilangan; i++)
        {
            double bilangan;
            printf("Bilangan ke-%d: ", i + 1);
            scanf("%lf", &bilangan);

            if ((int)bilangan % 2 == 0)
            {
                sum += bilangan;
                jumlah_genap++;
            }
        }

        if (jumlah_genap > 0)
        {
            rata_rata = sum / jumlah_genap;
            printf("Rata-rata bilangan genap dari %d bilangan tersebut adalah: %d\n", jumlah_genap, rata_rata);
        }
        else
        {
            printf("Tidak ada bilangan genap.\n");
        }

        printf("\nKembali ke menu utama (y/n) ? : ");
        scanf(" %c", &pilihan);

        if (pilihan == 'y' || pilihan == 'Y')
        {
            goto menuawal;
        }
        else
        {
            return 0;
        }

    case 2:
        printf("Masukkan jumlah baris: ");
        int n;
        scanf("%d", &n);

        int j;
        int totalSum = 0;

        for (i = 1; i <= n; i++)
        {
            int rowSum = 0;

            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
                rowSum += j;

                if (j < i)
                {
                    printf(" + ");
                }
            }
            totalSum += rowSum;

            printf(" = %d\n", rowSum);
        }

        printf("\nJumlah keseluruhan: %d\n", totalSum);

        printf("\nKembali ke menu utama (y/n) ? : ");
        scanf(" %c", &pilihan);

        if (pilihan == 'y' || pilihan == 'Y')
        {
            goto menuawal;
        }
        else
        {
            return 0;
        }
        break;

    case 3:
        system("cls");
        printf("===Menghitung Kardus keluar pak gehu===\n");

        int jumlahBakwan, jumlahGehu, jumlahPisgor;
        int maksimumBakwan = 20, maksimumGehu = 15, maksimumPisgor = 25;

        printf("Jumlah bakwan pak engkus        : ");
        scanf("%d", &jumlahBakwan);

        printf("Jumlah gehu pak engkus          : ");
        scanf("%d", &jumlahGehu);

        printf("Jumlah pisang goreng pak engkus : ");
        scanf("%d", &jumlahPisgor);

        int kardusBakwan = (jumlahBakwan + maksimumBakwan - 1) / maksimumBakwan;
        int kardusGehu = (jumlahGehu + maksimumGehu - 1) / maksimumGehu;
        int kardusPisgor = (jumlahPisgor + maksimumPisgor - 1) / maksimumPisgor;

        int totalKardus = kardusBakwan + kardusGehu + kardusPisgor;

        printf("\nTotal kardus yang dibutuhkan:\n");
        printf("Bakwan   : %d kardus (%d bakwan)\n", kardusBakwan, jumlahBakwan);
        printf("Gehu     : %d kardus (%d gehu)\n", kardusGehu, jumlahGehu);
        printf("Pisgor   : %d kardus (%d pisgor)\n", kardusPisgor, jumlahPisgor);
        printf("-------------------\n");
        printf("Total    : %d kardus\n", totalKardus);

        printf("\nKembali ke menu utama (y/n) ? : ");
        scanf(" %c", &pilihan);

        if (pilihan == 'y' || pilihan == 'Y')
        {
            goto menuawal;
        }
        else
        {
            return 0;
        }
        break;

    case 4:
        system("cls");
        printf("Dadah :)");
        break;
    }
    return 0;
}
