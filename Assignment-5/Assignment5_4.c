//Display Max of three numbers

#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Number is positive");
    }
    else if(num < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is zero");
    }
}

int main()
{
    int number;

    printf("Enter two numbers: ");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}