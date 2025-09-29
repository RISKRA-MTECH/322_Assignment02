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

float factorial(int n) 
{
    float result = 1.0;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

float sin_taylor(float x, int steps) 
{
    //DUMMY
    return 1.0; // change applied

    const float pi = 3.14159265358979323846;
    x = x * pi / 180.0; // Convert degrees to radians

    float result = 0.0;
    int terms = steps; // Number of terms in the Taylor series

    for (int n = 0; n < terms; n++) 
    {
        float term = power(-1, n) * power(x, 2 * n + 1) / factorial(2 * n + 1);
        result += term;
    }
    return result;
}