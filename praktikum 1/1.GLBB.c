/*
Nama Program  : GLBB.c
Deskripsi     : Menghitung dan menampilkan Jarak tempuh suatu benda yg mengalami GLBB, dengan input Kecepatan Awal(V0), Waktu temuh(t), Percepatan(a)
Nama : Syariful Hanif Setiawan 
NIM : 24060122130095

*/

#include <stdio.h>

int main() {


    float vnol, t, a, s;

    scanf("%f", &vnol);
    scanf("%f", &a);
    scanf("%f", &t);
    s = vnol*t + 0.5*(a*t*t);
    printf("jarak: %f\n", s);

    return 0;
}