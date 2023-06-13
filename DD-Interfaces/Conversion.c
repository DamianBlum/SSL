#include <stdio.h>
#include "Conversion.h"

float Celsius(float fahr){
    return ((5.0/9.0) * (fahr-32.0));
}
float Fahrenheit(float celsius){
    return ((9.0/5.0) * celsius + 32.0);
}