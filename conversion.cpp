#include <iostream>
#include "conversion.h"

float celsiusToFahrenheit(float temp)
{
    temp = (temp * 9/5) + 32;
    return temp;
}

float fahrenheitToCelsius(float temp)
{
    temp = (temp - 32) * 5/9;
    return temp;
}

float inchesToCentimeters(float num)
{
    num = num * 2.54;
    return num;
}

float centimetersToInches(float num)
{
    num = num / 2.54;
    return num;
}