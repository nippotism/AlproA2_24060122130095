/*
Nama : Syariful Hanif Setiawan 
NIM  : 24060122130095
Nama Program : NilMax2Tabel.c
Deskripsi : Menampilkan bilnagna terbesar kedua didalam suatu array berisi integer
*/
#include <stdio.h>

int main() {

  
  //Kamus
  int a[50];
  int i;
  int n;
  int max1=0,max2=0;
    
  //Algoritma
    printf("masukkan jumlah array yang ingin dipakai : ");
    scanf("\n%d",&n);

  for(i=0;i<n;i++) {
    printf("masukkan indeks ke -%d : ", i);
    scanf("%d", &a[i]);
  }
  for (i=0;i<n;i++) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    }


  }
    printf("%d",max2);

    return 0;

}
