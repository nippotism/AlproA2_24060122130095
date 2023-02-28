/*
Nama Program : PBola.c
Deskripsi    : Menghitung dan menampilkan Gaya sentripetal suatu benda, dengan input Massa Benda(m), Kecepatan(v), Jari-Jari(r)
Nama : Syariful Hanif Setiawan 
NIM : 24060122130095

*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    float f, m, v, r;


    printf("masukkan massa benda :");
    scanf("%f",&m);

    printf("masukkan kecepatan benda :");
    scanf("%f",&v);

    printf("masukkan jari jari :");
    scanf("%f",&r);

    f = m*((v*v)/r);

    printf("Gaya sentripetalnya adalah :  %.2f \n", f);

    return 0;


}