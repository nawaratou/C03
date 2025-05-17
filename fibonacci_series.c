#include <stdio.h>

int main() {
    int limit;
    int a = 0, b = 1, next = 0;

    // Lire la valeur limite jusqu'à laquelle afficher la suite de Fibonacci
    scanf("%d", &limit);

    // Afficher les termes de la suite tant que <= limite
    while (a <= limit) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
