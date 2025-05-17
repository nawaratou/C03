#include <stdio.h>

int main() {
    int a, b, c;
    
    // Lecture des trois nombres
    scanf("%d %d %d", &a, &b, &c);
    
    // Comparaison en cascade
    if (a >= b && a >= c) {
        printf("Le plus grand nombre est : %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Le plus grand nombre est : %d\n", b);
    } else {
        printf("Le plus grand nombre est : %d\n", c);
    }
    
    return 0;
}