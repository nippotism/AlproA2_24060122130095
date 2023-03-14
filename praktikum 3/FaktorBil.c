/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : Integer.c
Deskripsi : Menampilkan semua faktor dari bilangan N
*/



#include <stdio.h>


int main() {

    int i = 1;
    int n;

    printf("masukkan angka: ");
    scanf("%d",&n);   

    while(i <= n){
        if(n%i == 0){
            if(n/i == 1){
                printf("%d",i);
            }
            else{
                printf("%d,",i);
            } 
        }
        i++;

    
    }

    return 0;
}