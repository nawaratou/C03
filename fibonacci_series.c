#include <stdio.h>

int main() {
    int limit;
    printf("Entrez la valeur limite : ");
    scanf("%d", &limit);

    int a = 0, b = 1;
    printf("Fibonacci : %d", a);

    while (b <= limit) {
        printf(" %d", b);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
