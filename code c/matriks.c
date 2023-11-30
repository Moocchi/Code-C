#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int matriks[100][100];

int faktorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return (a * faktorial(a - 1));
    }
}

int pangkat(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        return a * pangkat(a, b - 1);
    }
}

int main()
{
    int a, b;
    int i, j;
    matriks angka;

    system("cls");
    printf("---------Program Matriks----------\n");
    printf("Masukkan kolom : ");
    scanf("%d", &b);
    printf("Masukkan baris : ");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            angka[j][i] = (pangkat(i + 1, j) + faktorial(j));
        }
    }
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("| %-2d |", angka[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
