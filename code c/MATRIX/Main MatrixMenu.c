#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "Prc.main.c"
#include "matrix.h"


int main(){
    
    int pilihan;
    char pilihan1;

menu :
    system("cls");
    printf("----------- O P E R A S I -- M A T R I K S -----------\n");
    printf("\nPilihan :");
    printf("\n\n1. Penjumlahan\n2. Pengurangan\n3. Transpose\n4. Keluar");
    printf("\n\nMassukan Pilihan Anda : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1: 
        pertambahan();
        break;
    
    case 2:
        pengurangan();
        break;
    
    case 3:
        Transpose();
        break;

    case 4:
    system("cls");
    printf("Dadah :)");
    return 0;

    default:
        printf("Hehe :)");
        return 0;
    }
    printf("\nKembali ke menu utama (y/n) ? : ");
        scanf(" %c", &pilihan1);

        if (pilihan1 == 'y' || pilihan1 == 'Y')
        {
            goto menu;
        }
        else
        {
            system("cls");
            printf("Dadah :)");
            return 0;
        }
}
