#include <stdio.h>

int main() {
    int iA, iB;
    char choice;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);

    printf("Pilih operasi aritmatika (a, b, c, d, e, f): ");
    scanf(" %c", &choice);

    if(choice == 'a') {
        printf("Hasil %d + %d = %d\n", iA, iB, iA+iB);
    }
    else if(choice == 'b') {
        printf("Hasil %d - %d = %d\n", iA, iB, iA-iB);
    }
    else if(choice == 'c') {
        printf("Hasil %d * %d = %d\n", iA, iB, iA*iB);
    }
    else if(choice == 'd') {
        printf("Hasil %d / %d = %f\n", iA, iB, (float)iA/iB);
    }
    else if(choice == 'e') {
        printf("Hasil %d div %d = %d\n", iA, iB, iA/iB);
    }
    else if(choice == 'f') {
        printf("Hasil %d mod %d = %d\n", iA, iB, iA%iB);
    }
    else {
        printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}