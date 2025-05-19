#include <stdio.h>

void genererFibonacci(int limite) {
    int a = 0, b = 1;
    while (a <= limite) {
        printf("%d ", a);
        int suivant = a + b;
        a = b;
        b = suivant;
    }
    printf("\n");
}

int main() {
    int limite;
    
    printf("Entrez la limite pour la série de Fibonacci : ");
    scanf("%d", &limite);
    
    if (limite < 0) {
        printf("Veuillez entrer un entier positif.\n");
    } else {
        genererFibonacci(limite);
    }
    
    return 0;
}