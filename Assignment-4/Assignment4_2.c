//Program to Display Reverse of Factors of a Number

#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;
    int iMul = 1;

    if(iNo <= 0)
    {
         iNo = -iNo;
    }

    printf("Factors of number:\n");

    for(i = iNo; i >= 1; i--)
    {
        if((iNo % i ) == 0)
        {
            printf("%d ",i);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}