
#include <stdio.h>

int main() {
    int i = 1, j, sum, N;

    // Memperoleh bilangan integer sembarang N dari pengguna
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Mencari bilangan sempurna dari 1 hingga N
    printf("Bilangan sempurna dari 1 hingga %d adalah: \n", N);
    while (i <= N) {
        sum = 0;
        j = 1;

        // Mencari faktor-faktor bilangan i
        while (j < i) {
            if (i % j == 0) {
                sum += j;
            }
            j++;
        }

        // Mengecek apakah bilangan i adalah bilangan sempurna
        if (sum == i) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
