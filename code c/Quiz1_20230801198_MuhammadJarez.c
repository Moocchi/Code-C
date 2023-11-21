#include <stdio.h>

int main()
{
    int menu, jam, gaji;
    int id;
    char nama[50];
    char jabatan[50];
    int jam_masuk, menit_masuk, jam_keluar, menit_keluar;
    int biaya = 0;

menu:
    system("cls");
    printf("1. Program Input Data Pegawai\n");
    printf("2. Program Hitung Biaya Parkir\n");
    printf("3. Keluar\n");
    printf("\nMasukkan Pilihan Menu: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("ID Pegawai          : ");
        scanf(" %d", &id);
        printf("Nama Pegawai        : ");
        scanf(" %s %s", nama, nama);
        printf("Jabatan             : ");
        scanf(" %s", jabatan);
        printf("Jam Kerja Perhari   : ");
        scanf("%d", &jam);
        printf("Golongan gaji       : ");
        scanf("%d", &gaji);

        system("cls");
        printf("\n==================== Hasil Olah Data ====================\n");
        printf("ID Pegawai          : %d\n", id);
        printf("Nama Pegawai        : %s %s\n", nama, nama);
        printf("Jabatan             : %s\n", jabatan);
        printf("Jam Kerja Perhari   : %d\n", jam);
        printf("Golongan gaji       : %d\n", gaji);
        system("pause");
        goto menu;

    case 2:
        printf("Masukkan jam masuk  : ");
        scanf("%d %d", &jam_masuk, &menit_masuk);

        printf("Masukkan jam keluar : ");
        scanf("%d %d", &jam_keluar, &menit_keluar);

        if (jam_keluar < jam_masuk || (jam_keluar == jam_masuk && menit_keluar < menit_masuk))
        {
            printf("Jam keluar harus setelah jam masuk.\n");
        }
        else
        {
            int durasi_jam = jam_keluar - jam_masuk;
            int durasi_menit = menit_keluar - menit_masuk;

            if (durasi_menit < 0)
            {
                durasi_jam--;
                durasi_menit += 60;
            }

            if (durasi_jam > 0)
            {
                biaya += 2000; // Biaya untuk jam pertama
            }

            if (durasi_jam > 1)
            {
                biaya += 1000; // Biaya untuk jam kedua
            }

            if (durasi_jam > 2)
            {
                biaya += 500 * (durasi_jam - 2); // Biaya untuk jam ke-3 dan seterusnya
            }

            if (durasi_menit > 0)
            {
                biaya += 500; // Biaya per jam tambahan jika ada menit lebih
            }

            printf("Biaya parkir untuk rentang waktu %d:%d sampai %d:%d adalah: %d\n", jam_masuk, menit_masuk, jam_keluar, menit_keluar, biaya);
            system("pause");
            goto menu;

        case 3:
            printf("dadah :)");
            return 0;
        default:
            printf("Masukkan Pilihan Ulang :)\n");
            system("pause");
            goto menu;
        }

        return 0;
    }
}
