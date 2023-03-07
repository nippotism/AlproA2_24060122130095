/*
Nama Program : PBola.c
Deskripsi    : Menghitung dan menampilkan jarak suatu bola yang mengalami gerak parabola, dengan input Kecepatan Awal(V0), Waktu(t), Konstanta gravitasi bumi(g = 9.8 m/s2)
Nama : Syariful Hanif Setiawan 
NIM : 24060122130095

*/
int main() {
    
    
    //Kamus
    float vnol, t, y;
    const double g = 9.8;
    
    //Algoritma
    scanf("%f",&vnol);
    scanf("%f",&t);

    y = vnol * t - 0.5*(g*t*t);
    printf("%f",y);


    return 0;
}
