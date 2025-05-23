#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit;
    scanf("%d", &limit);  // Lire la limite (ex: 5)

    int a = 0, b = 1;

    printf("Fibonacci : %d", a);  // Toujours commencer par 0

    while (b <= limit) {
        printf(" %d", b);
        int temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}
