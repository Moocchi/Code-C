#include "Fokal.h"

void fokal(char Nama[])
{
    int Hitungfokal = 0;

    for (int i = 0; Nama[i] != '\0'; i++)
    {
        char ch = tolower(Nama[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            Hitungfokal++;
        }
    }
    system("cls");
    printf("Total huruf fokal adalah : %d\n", Hitungfokal);
}
