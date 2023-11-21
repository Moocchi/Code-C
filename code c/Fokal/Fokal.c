#include "Fokal.h"
#include "prc.fokal.c"


void garis()
{
    for (int i = 0; i < 30; i++) {
        printf("=");
    }
    printf("\n");

}

int main()
{
    char Nama[100];

    system("cls");
    garis();
    printf("Program Pencari huruf Fokal :)\n");
    garis();
    getch(printf("Press any key to continue ;)"));
    system("cls");
    printf("\nMassukan Nama : ");
    scanf("%s", Nama);


    fokal(Nama);
    getch(printf("Press any key to exit ;)"));

    return 0;
}
