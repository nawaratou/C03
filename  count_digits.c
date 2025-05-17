#include <stdio.h>

int main() {
    int num, count = 0;
    
    scanf("%d", &num);
    
    // Gestion du cas 0
    if (num == 0) {
        count = 1;
    } else {
        // Compte les chiffres
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    
    printf("%d contient %d chiffre(s).\n", num, count);
    return 0;
}