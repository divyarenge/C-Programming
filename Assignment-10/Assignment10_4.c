#include<stdio.h>

double FhToCs(float fTemp)
{
    return (fTemp - 32) * (0.555);

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temperature: %lf",dRet);

    return 0;
}