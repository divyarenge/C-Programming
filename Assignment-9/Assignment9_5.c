#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1, iFact2 = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    
        return iFact1 - iFact2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Factorial of number is: %d ",iRet);

    return 0;
}