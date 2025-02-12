#include <stdio.h>

int main() {
    int n, i, j;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                int k = i > j ? i - j + 1 : j - i + 1;
                printf("%3d", k);
                if (j < n) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}