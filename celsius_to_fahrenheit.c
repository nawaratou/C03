#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en Celsius
    scanf("%f", &celsius);

    // Conversion en Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);
    return 0;
}
