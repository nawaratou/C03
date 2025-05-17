#include <stdio.h>

int main() {
    int a, b, c;
    
    // Read three integers from input
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Find the largest number using nested if-else statements
    if (a >= b) {
        if (a >= c) {
            printf("Le plus grand nombre est : %d\n", a);
        } else {
            printf("Le plus grand nombre est : %d\n", c);
        }
    } else {
        if (b >= c) {
            printf("Le plus grand nombre est : %d\n", b);
        } else {
            printf("Le plus grand nombre est : %d\n", c);
        }
    }
    
    return 0;
}