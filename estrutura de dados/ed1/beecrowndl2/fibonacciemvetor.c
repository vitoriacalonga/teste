#include <stdio.h>

int main() {

    unsigned long long int i, n, x, termo1, termo2, soma;

    scanf("%llu", &i);
    for (n = 0; n < i; n++) {
        scanf("%llu", &x);
        termo1 = 0;
        termo2 = 1;
        soma = 0;
        if (x == 0) {
            printf("Fib(%llu) = %llu\n", x, x);
        } else if (x == 1) {
            printf("Fib(%llu) = %llu\n", x, x);
        } else {
            for (unsigned long long int j = 2; j <= x; j++) {
                soma = termo1 + termo2;
                termo1 = termo2;
                termo2 = soma;
            }
            printf("Fib(%llu) = %llu\n", x, soma);
        }
    }

    return 0;
}