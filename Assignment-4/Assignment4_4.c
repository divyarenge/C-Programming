//Program to Display Summation Non Factors of a Number

#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
         iNo = -iNo;
    }

    printf("Non-Factors of number:\n");

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i ) != 0)
        {
            printf("%d ",i);
            iSum += i;
        }
    }
    printf("\nSummation of Non-factors :%d \n",iSum);
}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}