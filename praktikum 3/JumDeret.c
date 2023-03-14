/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : Integer.c
Deskripsi : Menghitung dan menampilkan penjumlahan semua bilangan dari 1 hingga bilangan ke-N
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int i = 1;
    int jumlah = 0;

    printf("masukkan angka: ");
    scanf("%d",&n);

    
    while(i <= n){
        jumlah += i;
        i++;
    }

    printf("%d",jumlah);

    return 0;
}