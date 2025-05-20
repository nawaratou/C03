#include <stdio.h>
#include <math.h>

int fibonacci_binet(int n) {
    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double pi = (1 - sqrt5) / 2;

    // Formule de Binet
    double result = (pow(phi, n) - pow(pi, n)) / sqrt5;
    
    // Arrondi pour éviter les erreurs de précision
    return (int)(result + 0.5);
}

int main() {
    int limit;
    printf("Entrez une valeur limite : ");
    scanf("%d", &limit);

    int n = 0;
    int value = 0;

    while (value <= limit) {
        value = fibonacci_binet(n);
        if (value > limit) break;
        printf("%d ", value);
        n++;
    }

    printf(".\n");
    return 0;
}
