#include "prc.HitungLuas.c"

void main()
{

    int panjang, lebar, luas;
    printf("Massukan Panjang & Lebar : ");
    scanf("%d %d", &panjang, &lebar);

    luas = LuasPersegi(panjang, lebar);

    printf("Luasnya adalah : %d", luas);
    getch();
}