#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);
    
    return 0;
}