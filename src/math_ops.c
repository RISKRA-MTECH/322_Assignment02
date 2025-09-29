#include "math_ops.h"

// --------- FUNCTION IMPLEMENTATIONS ------------


float multiply(float x, float y) 
{
    return x * y;
}

float add(float x, float y) 
{
    return x + y;
}

float square(float x) 
{
    return x * x;
}

float cube(float x) 
{
    return x * x * x;
}

float power(float base, int exponent ) 
{
    float res = 1;
    for(int i = 0; i < exponent; i++) 
    {
        res *= base;
    }
    return res;
}

float sub(float x, float y) 
{
    return x - y;
}

float divide(float x, float y) 
{
    if (y == 0) 
    {
        // Handle division by zero error
        printf("Error: Division by zero\n");
        return 0;
    }
    return x / y;
}