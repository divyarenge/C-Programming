#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = iNo, ch = 'a'; iCnt >= 1; iCnt--)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Value: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}