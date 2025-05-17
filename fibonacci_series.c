#include <stdio.h>

int main() {
    int limite;
    
    printf("Entrez la limite pour la suite de Fibonacci : ");
    scanf("%d", &limite);
    
    int a = 0, b = 1, suivant;
    
    printf("%d ", a);
    
    while (b <= limite) {
        printf("%d ", b);
        suivant = a + b;
        a = b;
        b = suivant;
    }
    
    printf("\n");
    return 0;
}