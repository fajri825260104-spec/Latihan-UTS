#include <stdio.h>

int main() {
    int pin_benar = 1234;
    int pin_input;
    int kesempatan = 3;

    while (kesempatan > 0) {
        printf("Masukkan PIN ATM: ");
        scanf("%d", &pin_input);

        if (pin_input == pin_benar) {
            printf("PIN Benar. Transaksi dilanjutkan.\n");
            break;
        } else {
            kesempatan--;
            if (kesempatan > 0) {
                printf("PIN Salah. Sisa kesempatan: %d\n", kesempatan);
            } else {
                printf("Kartu Anda Diblokir\n");
            }
        }
    }
    return 0;
}
