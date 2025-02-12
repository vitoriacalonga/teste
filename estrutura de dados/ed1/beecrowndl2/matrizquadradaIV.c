#include <stdio.h>

int main() {
    int n, i, j;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                int k = 0;
                if (i == j) k = 2;
                if (i + j == n - 1) k = 3;
                if (i >= n / 3 && i < n - n / 3 && j >= n / 3 && j < n - n / 3) k = 1;
                if (i == n / 2 && j == n / 2) k = 4;
                printf("%d", k);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}