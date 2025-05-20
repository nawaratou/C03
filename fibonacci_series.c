#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    // Lire la limite
    scanf("%d", &limit);

    printf("%d ", a);
    if (limit >= 1) {
        printf("%d ", b);
    }

    // Générer la suite de Fibonacci jusqu'à la limite
    next = a + b;
    while (next <= limit) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n");
    return 0;
}