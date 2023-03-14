/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : BilPrima.c
Deskripsi : Menampilkan apakah suatu bilangan merupakan bilangan prima
*/




#include <stdio.h>

int main() {

    int n;
    int i=2;
    int bol=1;

    printf("masukkan angka: ");
    scanf("%d",&n);   

    while(i < n ){
        if(n%i==0){
            bol=0;
        }
        i++;
    }
    
    if(bol==1){
        printf("%d adalah bilangan prima",n);
    }
    else{
        printf("%d bukan bilangan prima",n);
    }


    return 0;
}