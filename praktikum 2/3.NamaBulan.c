/*
Nama Program  : NamaBulan.c
Deskripsi     : Menampilkan Nama Bulan jika diberikan input Bulan berupa angka
Nama : Syariful Hanif Setiawan 
NIM : 24060122130095

*/

#include <stdio.h>

int main() {
    int NomorBulan;

    printf("Masukkan nomor Bulan: ");
    scanf("%d", &NomorBulan);

    if (NomorBulan < 1 || NomorBulan > 7) {
        printf("Masukan nomor Bulan tidak tepat\n");
    } else {
        switch (NomorBulan) {
            case 1:
                printf("Januari\n");
                break;
            case 2:
                printf("Februari\n");
                break;
            case 3:
                printf("Maret\n");
                break;
            case 4:
                printf("April\n");
                break;
            case 5:
                printf("Mei\n");
                break;
            case 6:
                printf("Juni\n");
                break;
            case 7:
                printf("Juli\n");
                break;
            case 8:
                printf("Agustus\n");
                break;
            case 9:
                printf("September\n");
                break;
            case 10:
                printf("Oktober\n");
                break;
            case 11:
                print("November\n");
                break;
            case 12:
                print("Desember\n");
                break;
        }
    }

    return 0;
}