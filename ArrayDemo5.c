#include<stdio.h>

int main()
{
    double Arr[] = {10.0,20.0,30.0,40.0};

    printf("Size of Arr : %lu :\n",sizeof(Arr));

    Arr++;  
    // ERROR = in all the prog lang you cannot change the base address of array bcoz compiler only has base address 

    return 0;
}