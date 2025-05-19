#include <stdio.h>

int main() {
    int limit;
    int t1 = 0, t2 = 1, nextTerm = 0;

    printf("Entrez la valeur limite : ");
    scanf("%d", &limit);

    printf("Série de Fibonacci jusqu'à %d :\n", limit);

    while (t1 <= limit) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
