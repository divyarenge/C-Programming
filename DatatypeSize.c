#include<stdio.h>
int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.86f;
    double dValue =98.7765263;

   printf("Size of character is: %lu\n",sizeof(cValue));
   printf("Size of integer is: %lu\n",sizeof(iValue));
   printf("Size of float is: %lu\n",sizeof(fValue));
   printf("Size of double is: %lu\n",sizeof(dValue));

    return 0;
}