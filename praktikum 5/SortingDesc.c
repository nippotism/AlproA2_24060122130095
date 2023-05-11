#include <stdio.h>

/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : SortingDesc.c
Deskripsi : Menampilkan array yang telah diurutkan menurun menggunakan metode Maksimum Suksesif
*/

int main(){


    //Kamus Lokal
    int a[50];
    int i;
    int n;
    int pass;
    int temp;
    int max;


    //Algoritma    
    printf("masukkan jumlah array yang ingin dipakai : ");
    scanf("\n%d",&n);

    for(i=0;i<n;i++) {
        printf("masukkan indeks ke -%d : ", i);
        scanf("%d", &a[i]);
    }

    for(pass=0;pass<n;pass++){
        max=pass;
        for(i=pass+1;i<n;i++){
            if(a[max]<a[i]){
                max=i;
            }
        
        }
        temp = a[max];
        a[max]=a[pass];
        a[pass]=temp;

    }
    

    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }

    return 0;

}
