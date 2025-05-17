#include <stdio.h>

int main() {
    int limit;
    int a = 0, b = 1, next;

    // Lire la limite
    scanf("%d", &limit);

    // Afficher la suite si la limite est au moins 0
    if (limit >= 0) {
        printf("%d ", a);
    }

    if (limit >= 1) {
        printf("%d ", b);
    }

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
