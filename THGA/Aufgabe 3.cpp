#include <stdio.h>
#include <stdlib.h>

double celsius;
double fahrenheit;


double celsiusInFahrenheit() {
    return celsius * 9.0 / 5.0 + 32.0;
}

int main() {

    printf("-----Celsius in Fahrenheit Rechner-----\n");
    printf("Geben sie die Temperatur in Celsius ein: ");
    scanf("%lf", &celsius);
    celsius=celsiusInFahrenheit();
    printf("in Fahrenheit: %.2f\n", celsius);

    return 0;
}
