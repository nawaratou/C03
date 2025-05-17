#include <stdio.h>

int main() {
    int nombre, original, compteur = 0;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    original = nombre;
    
    if (nombre == 0) {
        compteur = 1;
    } else {
        while (nombre != 0) {
            nombre /= 10;
            compteur++;
        }
    }
    
    printf("%d contient %d chiffre(s).\n", original, compteur);
    
    return 0;
}