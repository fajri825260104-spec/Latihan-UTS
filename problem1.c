#include <stdio.h>

int main() {
    int n;
    printf("Input n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", n * i);
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\n");
    return 0;
}
