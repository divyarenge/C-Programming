// Numberline

#include<stdio.h>

void Display(int iNo)
{
    int iCnt ;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d  ",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}