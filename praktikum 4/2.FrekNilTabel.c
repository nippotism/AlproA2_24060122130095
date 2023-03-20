/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : FrekNilTabel.c
Deskripsi : Menampilkan elemen suatu array yang frekuensi kemunculannya lebih dari satu
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Kamus
    int i, j, ukuran, freq, *Tabel;


    //Algoritma
    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    Tabel = (int*)malloc(ukuran * sizeof(int));


    
    for (i = 0; i<ukuran; i++){
        scanf("%d", &Tabel[i]);
    }

    printf("elemen yang frekuensi kemunculannya lebih dari satu adalah ");
    for (i = 0; i<ukuran; i++){
        freq = 0;
        for (j = 0; j < ukuran; j++){
            if (i == j){
                break;
            }
            else{
                if (Tabel[i] == Tabel[j]){
                freq += 1;
                }
            }
        }
        if (freq == 1){
            printf("%d, ",Tabel[i]);
        }
    }
    return 0;
}
