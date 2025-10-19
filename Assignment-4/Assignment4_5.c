//Program to Display Difference between Summation of factors and Non Factors of a Number

#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if(iNo <= 0)
    {
         iNo = -iNo;
    }

    printf("Factors of number:\n");

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i ) == 0)
        {
            printf("%d ",i);
            iSum1 += i;
        }
        
    }

    printf("\nNon-Factors of number:\n");

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i ) != 0)
        {
            printf("%d ",i);
            iSum2 += i;
        }
    }

    printf("\nSummation of Factors :%d \n",iSum1);
    printf("Summation of Non-factors :%d \n",iSum2);

    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Summation of Factors and Non-factors: %d",iRet);

    return 0;
}