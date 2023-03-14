/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : Integer.c
Deskripsi : Menampilkan semua bilangan prima yang berada sebelum angka ke-N
*/





#include <stdio.h>

int main() {

    int n;
    int i=2;

    printf("masukkan i: ");
    scanf("%d",&n);   

    if(n<=1){
        printf("Tidak ada bilangan Prima");
    }else{
        printf("Bilangan Primanya adalah ");
        while(i<n){
            if((i==2 || i==3 || i==5 || i==7) || (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0)){
                printf("%d, ",i);
            }
            i++;

        }
    }

    return 0;
}