#include<stdio.h>

char DisplayConvert(char cChar)
{
    if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' ||
        cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
    {
        printf("Given alphabet is vowel.");
    }
    else
    {
        printf("Given alphabet is not vowel.");
    }
}

int main()
{
    char cValue = 0;

    printf("Enter Character: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return 0;
}