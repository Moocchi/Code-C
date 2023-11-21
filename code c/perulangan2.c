#include <stdio.h>

int main()
{
    int menu;
    int baris, i, j;
menu :
    printf("Enter the number of rows: ");
    scanf("%d", &baris);

    for (i = 1; i <= baris; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    goto menu;

    return 0;
}
