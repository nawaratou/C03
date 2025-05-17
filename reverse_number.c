#include <stdio.h>

int main() {
    int nombre, inverse = 0, reste;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    while (nombre != 0) {
        reste = nombre % 10;
        inverse = inverse * 10 + reste;
        nombre /= 10;
    }
    
    printf("Nombre inversé : %d\n", inverse);
    
    return 0;
}