void take_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    printf("\nMasukkan nilai untuk matriks %dx%d:\n", jumlah_baris, jumlah_kolom);
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf("Masukkan nilai untuk elemen (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
}

void kurangi_matriks(int jumlah_baris, int jumlah_kolom, int matriks1[][jumlah_kolom], int matriks2[][jumlah_kolom], int hasil_matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            hasil_matriks[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}

void show_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {

    for (int i = 0; i < jumlah_baris; i++) {
        printf("|");
        for (int j = 0; j < jumlah_kolom; j++) {
            printf(" %d |", matriks[i][j]);
        }
        printf("\n");
    }
}

void ambil_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    printf("\nMasukkan nilai untuk matriks %dx%d:\n", jumlah_baris, jumlah_kolom);
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf("Masukkan nilai untuk elemen (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
}

void tambah_matriks(int jumlah_baris, int jumlah_kolom, int matriks1[][jumlah_kolom], int matriks2[][jumlah_kolom], int hasil_matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            hasil_matriks[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void tampilkan_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf(" %d |", matriks[i][j]);
        }
        printf("\n");
    }
}

void tarik_matriks_dari_pengguna(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    printf("\nMasukkan nilai untuk matriks %dx%d:\n", jumlah_baris, jumlah_kolom);
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            printf("Masukkan nilai untuk elemen (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
}

void transpose_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom], int hasil_transpose[][jumlah_baris]) {
    for (int i = 0; i < jumlah_baris; i++) {
        for (int j = 0; j < jumlah_kolom; j++) {
            hasil_transpose[j][i] = matriks[i][j];
        }
    }
}

void tunjuk_matriks(int jumlah_baris, int jumlah_kolom, int matriks[][jumlah_kolom]) {
    for (int i = 0; i < jumlah_baris; i++) {
        printf("|");
        for (int j = 0; j < jumlah_kolom; j++) {
            printf(" %d |", matriks[i][j]);
        }
        printf("\n");
    }
}

void pengurangan(){
    
    system("cls");
    printf("----------- P E N G U R A N G A N -----------\n");
    int jumlah_baris1, jumlah_kolom1;
    printf("Masukkan jumlah baris untuk Matriks 1: ");
    scanf("%d", &jumlah_baris1);
    printf("Masukkan jumlah kolom untuk Matriks 1: ");
    scanf("%d", &jumlah_kolom1);

    int jumlah_baris2, jumlah_kolom2;
    printf("\nMasukkan jumlah baris untuk Matriks 2: ");
    scanf("%d", &jumlah_baris2);
    printf("Masukkan jumlah kolom untuk Matriks 2: ");
    scanf("%d", &jumlah_kolom2);

    if (jumlah_baris1 != jumlah_baris2 || jumlah_kolom1 != jumlah_kolom2) {
        printf("\nMatriks tidak dapat dikurangkan. Dimensi berbeda.\n");
        return 0;
    }

    int matriks1[jumlah_baris1][jumlah_kolom1];
    int matriks2[jumlah_baris2][jumlah_kolom2];
    int hasil_matriks[jumlah_baris1][jumlah_kolom1];

    printf("\nMatriks 1:\n");
    take_matriks_dari_pengguna(jumlah_baris1, jumlah_kolom1, matriks1);

    printf("\nMatriks 2:\n");
    take_matriks_dari_pengguna(jumlah_baris2, jumlah_kolom2, matriks2);

    kurangi_matriks(jumlah_baris1, jumlah_kolom1, matriks1, matriks2, hasil_matriks);

    printf("\nMatriks 1:\n");
    show_matriks(jumlah_baris1, jumlah_kolom1, matriks1);

    printf("\n-\n");

    printf("\nMatriks 2:\n");
    show_matriks(jumlah_baris2, jumlah_kolom2, matriks2);

    printf("\n\nHasil Pengurangan Matriks:\n");
    show_matriks(jumlah_baris1, jumlah_kolom1, hasil_matriks);
}

void pertambahan() {

    int jumlah_baris1, jumlah_kolom1;
    system("cls");
    printf("----------- P E N J U M L A H A N-----------\n");
    printf("Masukkan jumlah baris untuk Matriks 1: ");
    scanf("%d", &jumlah_baris1);
    printf("Masukkan jumlah kolom untuk Matriks 1: ");
    scanf("%d", &jumlah_kolom1);

    int jumlah_baris2, jumlah_kolom2;
    printf("\nMasukkan jumlah baris untuk Matriks 2: ");
    scanf("%d", &jumlah_baris2);
    printf("Masukkan jumlah kolom untuk Matriks 2: ");
    scanf("%d", &jumlah_kolom2);

    if (jumlah_baris1 != jumlah_baris2 || jumlah_kolom1 != jumlah_kolom2) {
        printf("\nMatriks tidak dapat ditambahkan. Dimensi berbeda.\n");
        return 0;
    }

    int matriks1[jumlah_baris1][jumlah_kolom1];
    int matriks2[jumlah_baris2][jumlah_kolom2];
    int hasil_matriks[jumlah_baris1][jumlah_kolom1];

    printf("\nMatriks 1:\n");
    ambil_matriks_dari_pengguna(jumlah_baris1, jumlah_kolom1, matriks1);

    printf("\nMatriks 2:\n");
    ambil_matriks_dari_pengguna(jumlah_baris2, jumlah_kolom2, matriks2);

    tambah_matriks(jumlah_baris1, jumlah_kolom1, matriks1, matriks2, hasil_matriks);

    printf("\nMatriks 1:\n");
    tampilkan_matriks(jumlah_baris1, jumlah_kolom1, matriks1);

    printf("\n+\n");

    printf("\nMatriks 2:\n");
    tampilkan_matriks(jumlah_baris2, jumlah_kolom2, matriks2);

    printf("\n\nHasil Matriks:\n");
    tampilkan_matriks(jumlah_baris1, jumlah_kolom1, hasil_matriks);
    
}

void Transpose() {
    system("cls");

    int jumlah_baris, jumlah_kolom;

    system("cls");
    printf("----------- T R A N S P O S E -----------\n");
    printf("Masukkan jumlah baris untuk Matriks: ");
    scanf("%d", &jumlah_baris);
    printf("Masukkan jumlah kolom untuk Matriks: ");
    scanf("%d", &jumlah_kolom);

    int matriks[jumlah_baris][jumlah_kolom];
    int hasil_transpose[jumlah_kolom][jumlah_baris];

    printf("\nMatriks:\n");
    take_matriks_dari_pengguna(jumlah_baris, jumlah_kolom, matriks);

    transpose_matriks(jumlah_baris, jumlah_kolom, matriks, hasil_transpose);

    printf("\nMatriks:\n");
    show_matriks(jumlah_baris, jumlah_kolom, matriks);

    printf("\nTranspose Matriks:\n");
    show_matriks(jumlah_kolom, jumlah_baris, hasil_transpose);

    return 0;
}
