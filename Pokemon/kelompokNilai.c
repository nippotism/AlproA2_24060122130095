/*Nama File 	: kelompokpower.c*/
/*Deskripsi 	: Mengelompokkan tipe pokemon berdasarkan power power*/
/*Pembuat   	: 24060121130095-Syariful Hanif Setiawan */
/*Tgl Pembuatan	: 4 Juni 2023*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ // tipe bentukan pokemon yang berisi nama dan power power
    char nama[255][255];
    int power;
}pokemon;

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    pokemon PKM;
    int retval;
    
    FILE *myFILE, *aFile, *bFile;

    myFILE = fopen("nama_power.txt", "r");
    aFile = fopen("Kelas S.txt","w");
    bFile = fopen("Kelas A.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // apabila file kandidat.txt tidak ditemukan maka akan memunculkan pesan ini
    } else {
        fprintf(aFile, "Pokemon dengan peringkat S\nKarena di data tidak ada pokemon yang lebih dari 800 maka data kriteria S diubah menjadi >600\n");
        fprintf(bFile, "Pokemon dengan peringkat A\nPokemon yang powernya kurang dari 600\n");
        retval = fscanf(myFILE, "%s %d", &PKM.nama,&PKM.power);
        while (retval != EOF)
        {
            if(PKM.power >= 600){ // Proses pengelompokan power berdasarkan kriteria
                fprintf(aFile, "%s %d\n", PKM.nama,PKM.power);
            } else {
                fprintf(bFile, "%s %d\n", PKM.nama,PKM.power);
            }
            retval = fscanf(myFILE, "%s %d", &PKM.nama,&PKM.power);
        }
        printf("power berhasil dikelompokkan");
        fclose(myFILE);        
    }
    return 0;
}