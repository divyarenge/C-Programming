#include<stdio.h>

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the Character you want to count :\n");
    scanf("%c",&cValue);

    iRet =  CountSmall(Arr);

    printf("Number of Small letters are  : %d\n",iRet);

    return 0;
}