//Multiplication of three numbers

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iRes = 0;

    iRes = iNo1 * iNo2 * iNo3;
    
    return iRes;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please three enter numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    
    printf("Multiplication of given numbers = %d",iRet);

    return 0;

}