/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : Integer.c
Deskripsi : Menampilkan apakah suatu bilangan merupakan bilangan sempurna
*/
#include <stdio.h>

int main() {

    int i=1;
    int n;
    int sum=0;

    printf("masukkan angka: ");
    scanf("%d",&n);

    while(i<n){

        if(n%i==0){
            sum += i;
        }
        i++;
    } 

    if(n==sum){
        printf("%d Bilangan Sempurna",n);
    }else{
        printf("%d Bukan Bilangan Sempurna",n);
    }

    return 0;
}