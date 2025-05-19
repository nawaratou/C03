#include <stdio.h>

int main() {
    int nombre, compteur = 0;

    // Lire un nombre
   
    scanf("%d", &nombre);

    int n = nombre;

    // Compter les chiffres
    if (n == 0) {
        compteur = 1;
    } else {
        while (n>0) {
            n = n / 10;
            compteur++;
        }
    }

    printf("%d contient %d chiffre(s).\n", nombre, compteur);
    return 0;
}
