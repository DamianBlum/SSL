#include <assert.h>
#include <stdio.h>
#include "conversion.h"

int main(){
    assert(Celsius(32) == 0);
    assert(Fahrenheit(0) == 32);
    assert((Celsius(15.5)- (-9.16)) <= 0.01);
    assert((Fahrenheit(15.5) - 59.9) <= 0.01);
    assert((Celsius(100) - 37.77) <= 0.01);
    assert((Fahrenheit(100) - 212) <= 0.01);
    return 0;
}