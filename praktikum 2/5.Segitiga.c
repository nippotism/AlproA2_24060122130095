

#include <stdio.h>

int main() {


    //Kamus
    int sisia;
    int sisib;
    int sisic;

    //Algoritma
    printf("Masukkan Sisi A: \n");
    scanf("%d",&sisia);
    printf("Masukkan Sisi B: \n");
    scanf("%d",&sisib);
    printf("Masukkan Sisi C: \n");
    scanf("%d",&sisic);

    if(sisia>0 && sisib>0 && sisic>0){
        if((sisia == sisib) && (sisib == sisic)){
            printf("Segitiga Sama Sisi");
        }else if(sisia == sisib || sisib == sisic || sisia == sisic){
            printf("Segitiga Sama Kaki");
        }else{
            printf("Segitiga Sembarang");  
        }
    }else{
        printf("Bukan Segitiga");
    }



}