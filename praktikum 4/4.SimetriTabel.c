#include <stdio.h>

int main() {

    int a[50];
    int i;
    int n;
    int b[50];
    int m;
    int c=0;
    
    printf("masukkan jumlah array yang ingin dipakai tabel 1: ");
    scanf("\n%d",&n);

    printf("masukkan jumlah array yang ingin dipakai tabel 2: ");
    scanf("\n%d",&m);


    if(n==m){
        
        for(i=0;i<n;i++) {
            printf("masukkan indeks ke -%d : ", i);
            scanf("%d", &a[i]);
    }

        for(i=0;i<n;i++) {
            printf("masukkan indeks ke -%d : ", i);
            scanf("%d", &b[i]);
    }


        for(i=0;i<n;i++){
            if(a[i]==b[i]){
                c++;
        }
    
    }
        if(c==n || c==m){
        printf("Simetri");
        }else{
        printf("Tidak Simetri");
        }


    }else{
        printf("Tidak Simetri");
    }



    

    return 0;

}


