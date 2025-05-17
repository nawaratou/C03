#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;
    
    scanf("%d", &limit);
    
    printf("Série de Fibonacci jusqu'à %d :\n", limit);
    printf("%d ", a); // Affiche le premier terme
    
    while (b <= limit) {
        printf("%d ", b);
        next = a + b;
        a = b;
        b = next;
    }
    
    printf("\n");
    return 0;
}