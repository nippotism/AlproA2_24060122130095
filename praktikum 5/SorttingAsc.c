#include <stdio.h>

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

    for(pass=1;pass<n;pass++){
        temp = a[pass];

        i = pass-1;
        while(temp < a[i]&&i>0){
            a[i+1]=a[i];
            i--;

        }
        if(temp>=a[i]){
            a[i+1]=temp;
        }else{
            a[i+1]=a[i];
            a[i] = temp;
        }

        for(i=0;i<n;i++) {
            printf("%d", a[i]);
        }

        printf("\n");



    }

    

    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }

    return 0;

}