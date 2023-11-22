#include <stdio.h>

int main()
{
    int pilihan;
    char pilihan1;

menu : 

    system("cls");
    printf("=========== Selamat Datang ===========\n\n");
    printf("1. Nilai Rata - rata Dengan Array\n2. Nilai genap Pada Array\n3. Banyak Angka 5 pada array\n4. Nilai Min & Max Dengan Array\n5. Keluar\n\n");
    printf("Massukan Pilihan : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
            system("cls");
            printf("=====================\n");
            printf("++++ Rata - Rata ++++\n");
            printf("=====================\n");

            int a[100];
            int ya;

            printf("\nMasukkan jumlah elemen: ");
            scanf("%d", &ya);

            for (int i = 0; i < ya; i++) {
                printf("Masukkan Nilai A[%d]: ", i + 1);
                scanf("%d", &a[i]);
            }

            printf("\nArray:\n");
            for (int i = 0; i < ya; i++) {
                printf("A[%d] : %d\n", i + 1, a[i]);
            }

            int total_nilai = 0;
            for (int i = 0; i < ya; i++) {
                total_nilai += a[i];
            }

            float hasil = (float)total_nilai / ya;
            printf("Rata - ratanya adalah : %.2f\n", hasil);

            printf("\nKembali ke menu utama (y/n) ? : ");
            scanf(" %c", &pilihan1);

            if (pilihan1 == 'y' || pilihan1 == 'Y')
            {
                goto menu;
            }
            else
            {
                return 0;
            }
    
    case 2 :
            system("cls");
            printf("=====================\n");
            printf("++++ Nilai Genap ++++\n");
            printf("=====================\n");

            int b[100];
            int jumlah_angka;

            printf("Masukkan banyak angka: ");
            scanf("%d", &jumlah_angka);

            for (int i = 0; i < jumlah_angka; i++) {
                int masukkan_angka;
                printf("Masukkan angka ke-%d: ", i + 1);
                scanf("%d", &masukkan_angka);
                b[i] = masukkan_angka;
            }

            printf("\nGenap pada array:\n");
            for (int i = 0; i < jumlah_angka; i++) {
                if (b[i] % 2 == 0) {
                    printf("Genap array ke-%d adalah: %d\n", i + 1, b[i]);
                }
            }

            printf("\nKembali ke menu utama (y/n) ? : ");
            scanf(" %c", &pilihan1);

            if (pilihan1 == 'y' || pilihan1 == 'Y') {
                goto menu;
            } else {
                return 0;
            }
        
    case 3:
            system("cls");
            printf("========================\n");
            printf("++++ Banyak angka 5 ++++\n");
            printf("========================\n");

            int c[100]; 
            int banyak_angka;

            printf("Masukkan banyak angka: ");
            scanf("%d", &banyak_angka);

            for (int i = 0; i < banyak_angka; i++) {
                int masukkan_angka;
                printf("Masukkan angka ke-%d: ", i + 1);
                scanf("%d", &masukkan_angka);
                c[i] = masukkan_angka;
            }

            int lima[100];
            int count = 0;

            for (int i = 0; i < banyak_angka; i++) {
                if (c[i] == 5) {
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

            printf("\nKembali ke menu utama (y/n) ? : ");
            scanf(" %c", &pilihan1);

            if (pilihan1 == 'y' || pilihan1 == 'Y') {
                goto menu;
            } else {
                return 0;
            }

    case 4 :
            system("cls");
            printf("=========================\n");
            printf("++++ Nilai Min & Max ++++\n");
            printf("=========================\n");


            int d[100];
            int total_angka;

            printf("Masukkan banyak angka: ");
            scanf("%d", &total_angka);

            for (int i = 0; i < total_angka; i++) {
                int masukkan_angka;
                printf("Masukkan angka ke-%d: ", i + 1);
                scanf("%d", &masukkan_angka);
                d[i] = masukkan_angka;
            }

            int besar = d[0];
            int kecil = d[0];


            for (int i = 1; i < total_angka; i++) {
                if (d[i] > besar) {
                    besar = d[i];
                }
                if (d[i] < kecil) {
                    kecil = d[i];
                }
            }
            printf("\n");
            printf("Nilai Maximum nya adalah : %d\n", besar);
            printf("Nilai Minimum nya adalah : %d\n", kecil);

            printf("\nKembali ke menu utama (y/n) ? : ");
            scanf(" %c", &pilihan1);

            if (pilihan1 == 'y' || pilihan1 == 'Y') {
                goto menu;
            } else {
                return 0;
            }

    case 5:
        system("cls");
        printf("dadah :)");
        return 0;

    default:
        printf("Pilihan tidak valid");
        break;
    }   
        return 0;
}