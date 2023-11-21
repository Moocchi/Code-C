#include "stdlib.h"
#include "MinMax.h"
#include "prc.MinMax.c"

void main ()
{
    
    int input;
    printf("==========| | Program Mencari Nilai Min & Max | |==========\n");
    printf("Masukkan Banyak Array : ");
    scanf("%d", &input);

    printf("===========================================================\n");
    printf("Input Array\n");
    printf("===========================================================\n");
    minmax(input);

    getchar();

}