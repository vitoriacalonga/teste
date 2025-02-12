#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int velocidades[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &velocidades[i]);
    }

    for (int i = 1; i < N; i++) {
        if (velocidades[i] < velocidades[i - 1]) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("0\n");

    return 0;
}