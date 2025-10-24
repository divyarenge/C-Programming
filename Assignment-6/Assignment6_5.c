//Calculate percentage

#include<stdio.h>

float Percentage(float fNo1, float fNo2)
{
    float fRes = 0;

    if(fNo1 == 0)
    {
        printf("Total marks cannot be zero.\n");
        return 0.0f;
    }

    fRes = (fNo2 / fNo1) * 100 ;
    
    return fRes;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks:\n ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks:\n ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    
    printf("Total percentage = %f",fRet);

    return 0;

}