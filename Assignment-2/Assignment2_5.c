#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo %2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

     if(bRet == true)
    {
        printf("Given Number is Even");
    }
    else
    {
        printf("Given number is odd");
    }

    return 0;

}