/*
	Nama :Muhammad Jarez
	Nim  : 20230801198
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

int main()
{

	int menu; // integer menu
	char pilihan;

	system("CLS"); // CLS clear sistem
	printf("Tugas Praktikum ALPRO 3\n");
	printf("===========================================\n");
	printf("Nama : Muhammad Jarez\n");
	printf("NIM  : 20230801198\n");
	printf("===========================================\n");
	printf("\n");
	printf("Welcome,\n");
	system("PAUSE");

menu:
	system("cls");
	printf("================\n");
	printf("TP 3 Pengulangan\n");
	printf("================\n");
	printf("\n");
	printf("1. Pembuat Program\n");
	printf("2. Penjumlahan Deret\n");
	printf("3. Menampilkan banyak bilangan\n");
	printf("4. Rata - rata\n");
	printf("5. Faktorial\n");
	printf("6. Keluar\n");
	printf("\n");
	printf("Masukan Pilihan : ");
	scanf("%d", &menu);

	switch (menu)
	{

	case 1:
		system("cls");
		printf("================\n");
		printf("Pembuat program\n");
		printf("================\n");
		printf("\n");
		printf("Nama   : Muhammad Jarez\n");
		printf("Nim    : 20230801198\n");
		printf("Email  : muhamadjarez@student.esaunggul.ac.id\n");
		getch();
		goto menu;

	case 2:
		system("cls");
		printf("=================\n");
		printf("Penjumlahan Deret\n");
		printf("=================\n");
		printf("\n");

		int n, m, hasild = 0;
		printf("Masukkan Angka : ");
		scanf("%d", &n);

		printf("\nDeret bilangan 1 hingga %d = ", n);
		for (m = 1; m <= n; m++)
		{
			printf("%d", m);
			if (m < n)
			{
				printf(" + ");
			}
			hasild += m;
		}
		printf(" = %d\n", hasild);

		printf("Kembali ke menu utama (y/n) ? : ");
		scanf(" %c", &pilihan);

		if (pilihan == 'y')
		{
			goto menu;
		}
		else
		{
			(pilihan == 'n');
			return 0;
		}

	case 3:
		system("cls");
		printf("===========================\n");
		printf("Menampilkan Banyak Bilangan\n");
		printf("===========================\n");
		printf("\n");

		int i, bilangan1, bilangan2;
		int genapCount = 0, ganjilCount = 0, kelipatan7Count = 0;

		printf("Masukkan bilangan pertama: ");
		scanf("%d", &bilangan1);

		printf("Masukkan bilangan kedua: ");
		scanf("%d", &bilangan2);

		// Pastikan bilangan1 < bilangan2
		if (bilangan1 > bilangan2)
		{
			int temp = bilangan1;
			bilangan1 = bilangan2;
			bilangan2 = temp;
		}

		printf("\n\nBilangan genap antara %d dan %d: ", bilangan1, bilangan2);
		for (i = bilangan1; i <= bilangan2; i++)
		{
			if (i % 2 == 0)
			{
				printf("%d ", i);
				genapCount++;
			}
		}

		printf("\n\nBilangan ganjil antara %d dan %d: ", bilangan1, bilangan2);
		for (i = bilangan1; i <= bilangan2; i++)
		{
			if (i % 2 != 0)
			{
				printf("%d ", i);
				ganjilCount++;
			}
		}

		printf("\n\nBilangan kelipatan 7 antara %d dan %d: ", bilangan1, bilangan2);
		for (i = bilangan1; i <= bilangan2; i++)
		{
			if (i % 7 == 0)
			{
				printf("%d ", i);
				kelipatan7Count++;
			}
		}

		printf("\n\nJumlah bilangan genap: %d", genapCount);
		printf("\n\nJumlah bilangan ganjil: %d", ganjilCount);
		printf("\n\nJumlah bilangan kelipatan 7: %d", kelipatan7Count);

		printf("\n");

		printf("\nKembali ke menu utama (y/n) ? : ");
		scanf(" %c", &pilihan);

		if (pilihan == 'y')
		{
			goto menu;
		}
		else
		{
			(pilihan == 'n');
			return 0;
		}

	case 4:
		system("cls");
		printf("===========================\n");
		printf("Menghitung Rata-Rata\n");
		printf("===========================\n");
		printf("\n");

		int o, p;
		double sum = 0.0;
		float average;

	awal:
		printf("Masukkan jumlah bilangan (maksimum 10): ");
		scanf("%d", &o);

		if (o <= 0 || o > 10)
		{
			printf("Jumlah bilangan harus lebih dari 0 dan tidak lebih dari 10.\n");
			goto awal;
		}

		printf("Masukkan %d bilangan terpisah:\n", o);

		for (i = 0; i < o; i++)
		{
			double num;
			printf("Bilangan ke-%d: ", i + 1);
			scanf("%lf", &num);
			sum += num;
		}

		average = sum / o;

		printf("Rata-rata dari %d bilangan tersebut adalah: %.2lf\n", o, average);

		printf("\nKembali ke menu utama (y/n) ? : ");
		scanf(" %c", &pilihan);

		if (pilihan == 'y')
		{
			goto menu;
		}
		else
		{
			(pilihan == 'n');
			return 0;
		}

	case 5:
		system("cls");
		printf("===========================\n");
		printf("Faktorial\n");
		printf("===========================\n");
		printf("\n");

		int angka, hasil, q;

	awal1:
		printf("Input angka: ");
		scanf("%d", &angka);

		if (angka <= 0 || angka == 0)
		{
			printf("Angka tidak boleh kurang dari nol!\n");
			goto awal1; // Keluar dari program dengan kode kesalahan
		}
		
		printf("%d! = ", angka);

		hasil = 1;

		for (q = angka; q > 0; q--)
		{
			hasil = hasil * q;
			printf("%d", q);

			if (q != 1)
			{
				printf(" * ");
			}
		}

		printf(" = %d \n", hasil);

		printf("\nKembali ke menu utama (y/n) ? : ");
		scanf(" %c", &pilihan);

		if (pilihan == 'y')
		{
			goto menu;
		}
		else
		{
			(pilihan == 'n');
			return 0;
		}

	case 6:
		system("cls");
		printf(" ____                              _       _                             \n");
		printf("/ ___|  __ _ _ __ ___  _ __   __ _(_)     | |_   _ _ __ ___  _ __   __ _ \n");
		printf("\\___ \\ / _` | '_ ` _ \\| '_ \\ / _` | |  _  | | | | | '_ ` _ \\| '_ \\ / _` |\n");
		printf(" ___) | (_| | | | | | | |_) | (_| | | | |_| | |_| | | | | | | |_) | (_| |\n");
		printf("|____/ \\__,_|_| |_| |_| .__/ \\__,_|_|  \\___/ \\__,_|_| |_| |_| .__/ \\__,_|\n");
		printf("                      |_|                                   |_|          \n");

		return 0;

	default:
		printf("masukan Angka 1-6");
		goto menu;

	} // akhir switch case
} // donee
