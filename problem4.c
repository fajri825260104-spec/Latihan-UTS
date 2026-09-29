#include <stdio.h>

int main() {
    int n;
    char c1, c2;

    printf("Input 1 (n): ");
    scanf("%d", &n);
    printf("Input 2 (c1): ");
    scanf(" %c", &c1);
    printf("Input 3 (c2): ");
    scanf(" %c", &c2);

    for (int i = 1; i <= n; i++) {
        char ch = (i % 2 != 0) ? c1 : c2;
        for (int j = 1; j <= n; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
