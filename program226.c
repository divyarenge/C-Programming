#include<stdio.h>

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ch))
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

    fflush(stdin);                      //NOT applicable on all OS

    printf("Enter the Character you want to count :\n");
    scanf("%c",&cValue);

    iRet =  CountOccurence(Arr, cValue);

    printf("Number of Occurences  : %d\n",iRet);

    return 0;
}