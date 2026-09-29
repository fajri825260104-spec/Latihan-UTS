#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int angka_target = (rand() % 20) + 1;
    int tebakan;

    while (1) {
        printf("Tebak angka (1-20) atau masukkan 99 untuk menyerah: ");
        scanf("%d", &tebakan);

        if (tebakan == 99) {
            printf("Permainan dihentikan.\n");
            break;
        } else if (tebakan == angka_target) {
            printf("cocok\n");
            break;
        } else if (tebakan < angka_target) {
            printf("lebih rendah\n");
        } else {
            printf("lebih tinggi\n");
        }
    }
    return 0;
}
