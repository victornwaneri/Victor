#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float w= get_float("weight(kg): ");
    float h= get_float("height(m): ");
    
    printf("BMI= %f kg/m^2\n", w/(h*h));
}
