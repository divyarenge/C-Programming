//Program to Display multiplication of Factors of a Number

#include<stdio.h>

void MultFactor(int iNo)
{
    int i = 0;
    int iMul = 1;

    if(iNo <= 0)
    {
         iNo = -iNo;
    }

    printf("Factors of number:\n");

    for(i = 1; i <= (iNo / 2); i++)
    {
        if((iNo % i ) == 0)
        {
            printf("%d ",i);
            iMul *= i;
        }
        
    }
    printf("\nMultiplication of factors :%d \n",iMul);
}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    MultFactor(iValue);

    return 0;
}