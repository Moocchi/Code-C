#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 100

char nama_makanan[MAX_ITEMS][50];  // Assuming a maximum of 50 characters for nama_makanan
int harga[MAX_ITEMS];

int binary_search(char item[50], int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int compare_result = strcmp(nama_makanan[mid], item);

        if (compare_result == 0) {
            return mid;
        } else if (compare_result < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

void sort_name(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(nama_makanan[j], nama_makanan[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, nama_makanan[j]);
                strcpy(nama_makanan[j], nama_makanan[j + 1]);
                strcpy(nama_makanan[j + 1], temp);

                int temp_harga = harga[j];
                harga[j] = harga[j + 1];
                harga[j + 1] = temp_harga;
            }
        }
    }
}


void sort_harga(int size) {
    for (int i = 0; i < size; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (harga[j] < harga[min_index]) {
                min_index = j;

                char temp[50];
                strcpy(temp, nama_makanan[i]);
                strcpy(nama_makanan[i], nama_makanan[min_index]);
                strcpy(nama_makanan[min_index], temp);

                int temp_harga = harga[i];
                harga[i] = harga[min_index];
                harga[min_index] = temp_harga;
            }
        }
    }
}

void display_menu(int size) {
    system("cls");

    printf("\t     Restaurant Ganyu\n");
    printf("=============================================\n");
    printf("No\t     Nama Barang\tHarga\n");
    printf("=============================================\n");

    for (int i = 0; i < size; i++) {
        printf("%d\t     %s\t\tRp.%d\n", i + 1, nama_makanan[i], harga[i]);
    }

    printf("=============================================\n");
}

void search_menu(int size) {
    system("cls");  // For UNIX-like systems, use "cls" for Windows

    char search_item[50];
    printf("Masukkan nama makanan yang ingin dicari: ");
    scanf("%s", search_item);

    sort_name(size);
    int result = binary_search(search_item, size);

    if (result != -1) {
        printf("=============================================\n");
        printf("%s ditemukan pada indeks %d\n", search_item, result + 1);
        printf("=============================================\n");
        getchar();  // Consume the newline character
        getchar();  // Wait for Enter to continue
    } else {
        printf("=============================================\n");
        printf("%s tidak ditemukan\n", search_item);
        printf("=============================================\n");
        getchar();  // Consume the newline character
        getchar();  // Wait for Enter to continue
    }
}

void add_new_menu(int *size) {
    system("cls");  // For UNIX-like systems, use "cls" for Windows

    printf("=============================================\n");
    printf("=Tambah Makanan=\n");
    printf("=============================================\n");

    printf("Masukkan Nama makanan: ");
    scanf("%s", nama_makanan[*size]);

    printf("Masukkan Harga Makanan: ");
    scanf("%d", &harga[*size]);

    (*size)++;
}

int main() {
    int size = 0;

    while (1) {
        display_menu(size);
        printf("\n1. Add new menu\n2. Sort menu by name (Bubble Sort)\n3. Sort menu by price (Selection Sort)\n4. Search menu (Binary Search)\n5. Exit\n");

        int pilihan;
        printf("\nMasukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                add_new_menu(&size);
                break;
            case 2:
                sort_name(size);
                break;
            case 3:
                sort_harga(size);
                break;
            case 4:
                search_menu(size);
                break;
            case 5:
                system("cls");
                printf("Dadah :>\n");
                exit(0);
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }
    }

    return 0;
}
