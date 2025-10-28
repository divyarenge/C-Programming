#include<stdio.h>

int KmToMeter(int iNo)
{
    return iNo * 1000;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("Area of Circle: %d",iRet);

    return 0;
}