#include <stdio.h>

int main() {
    int limit;
    int t1 = 0, t2 = 1, nextTerm = 0;

    scanf("%d", &limit);


    while (t1 <= limit) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
