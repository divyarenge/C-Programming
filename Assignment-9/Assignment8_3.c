#include<stdio.h>

int Number(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {

        iFact = iFact * iCnt;

    }
    return iFact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Number(iValue);

    printf("Factorial of number is: %d ",iRet);

    return 0;
}