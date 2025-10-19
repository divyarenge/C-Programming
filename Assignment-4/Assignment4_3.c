//Program to Display Multiplication of Non-Factors of a Number

#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;
    int iMul = 1;

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
            iMul *=i;
        }
        
    }
    printf("\nMultiplication of Non-factors :%d \n",iMul);
}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}