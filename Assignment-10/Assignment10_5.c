#include<stdio.h>

double SquareMeter(int iNo)
{
    return iNo * 0.0929;

}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Temperature: %lf",dRet);

    return 0;
}