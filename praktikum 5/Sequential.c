#include <stdio.h>

int main(){

    //Kamus Lokal
    int i=0;
    int T[8]={1, 3, 5, -8, 12, 90, 3, 5};
    int iX;
    int N = 8;
    int X =5;


    //Algoritma
    
    while((i<N)&&(T[i] != X)){
        i++;
    }
    if(T[i]==X){
        iX = i;
    }else{
        iX = 0;
    }

    printf("%d",iX+1);


}