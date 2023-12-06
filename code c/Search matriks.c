#include <stdio.h>

void printMatrix(int matrix[3][3]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Masukkan nilai untuk baris %d, kolom %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    system("cls");

    int matrix[3][3];
    
    while (1) {
        inputMatrix(matrix);
        system("cls");
        printMatrix(matrix);

        int cari;
        printf("\nCari Angka : ");
        scanf("%d", &cari);

        int found = 0;
        printf("\nNilai %d ditemukan di:\n", cari);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matrix[i][j] == cari) {
                    printf("Baris %d, kolom %d\n", i + 1, j + 1);
                    found = 1;
                }
            }
        }

        if (found) {
            break;
        } else {
            printf("\nNilai %d tidak ditemukan dalam matriks.\n", cari);
            break;
        }
    }

    return 0;
}
