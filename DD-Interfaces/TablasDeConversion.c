 #include <stdio.h>
 #include "Conversion.h"

void PrintTablaCelsius(float lower, float upper, float step){
    float celsius;
    celsius = lower;
    printf("Celsius Fahr\n");
    while (celsius <= upper) {
        printf("%.0f  %3.0f\n", celsius, Fahrenheit(celsius));
        celsius = celsius + step;
    }
    printf("\n");
}

void PrintTablaFahrenheit(float lower, float upper, float step){
    float fahr;
    fahr = lower;
    printf("Fahr Celsius\n");
    while (fahr <= upper) {
        printf("%.0f  %3.0f\n", fahr, Celsius(fahr));
        fahr = fahr + step;
    }
    printf("\n");
}

 int main()
 {
    const float lower= 0;
    const float upper = 300;
    const float step = 20;

    PrintTablaCelsius(lower, upper, step);
    PrintTablaFahrenheit(lower, upper, step);
    return 0;
 } 
 // los resta y se fija si la diferencia es menor a 0.0001 con tema float ojo!
 // para comparacion de floats se usa epsilon
 // es raro que te de = 0 un float, porque el float se represente de varias maneras
 // TODO los comentarios de arriba es para los assert!!!
 // char **argv es doble puntero
