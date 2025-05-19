#include <stdio.h>
#include <stdlib.h>

// Function to generate fibonnaci series
int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%llu ", next);
    }
    printf("\n");
    return 0;
}