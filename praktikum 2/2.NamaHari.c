/*
Nama Program  : NamaHari.c
Deskripsi     : Menampilkan Namahari jika diberikan input hari berupa angka
Nama : Syariful Hanif Setiawan 
NIM : 24060122130095

*/

#include <stdio.h>

int main() {
    
    //Kamus
    int NomorHari;
    
    //Algoritma
    printf("Masukkan nomor hari: ");
    scanf("%d", &NomorHari);

    if (NomorHari < 1 || NomorHari > 7) {
        printf("Masukan nomor hari tidak tepat\n");
    } else {
        switch (NomorHari) {
            case 1:
                printf("Minggu\n");
                break;
            case 2:
                printf("Senin\n");
                break;
            case 3:
                printf("Selasa\n");
                break;
            case 4:
                printf("Rabu\n");
                break;
            case 5:
                printf("Kamis\n");
                break;
            case 6:
                printf("Jumat\n");
                break;
            case 7:
                printf("Sabtu\n");
                break;
        }
    }

    return 0;
}
