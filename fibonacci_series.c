#include <stdio.h>

int main() {
    int limit;
    int a = 0, b = 1, c;

    // Lire la valeur depuis l'entrée standard (sans afficher de message)
    scanf("%d", &limit);

    // Afficher les nombres de Fibonacci jusqu'à la limite
    while (a <= limit) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
