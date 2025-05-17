#include <stdio.h>

int main() {
    int nombre, reste, inverse = 0;

    // Lire un entier
    scanf("%d", &nombre);

    int original = nombre;

    // Inverser le nombre
    while (nombre != 0) {
        reste = nombre % 10;
        inverse = inverse * 10 + reste;
        nombre = nombre / 10;
    }

    printf("Nombre inversé : %d\n", inverse);
    return 0;
}
