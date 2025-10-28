#include<stdio.h>

double CircleArea(float fRad)
{
    float fPI = 3.14f;
    return fPI * fRad * fRad;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle: %lf",dRet);

    return 0;
}