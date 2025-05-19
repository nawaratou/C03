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
    
    scanf("%d", &limite);
    
    if (limite < 0) {
    } else {
        genererFibonacci(limite);
    }
    
    return 0;
}