#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length=0;
    int *Arr=NULL;

    printf("Enter the number of elements: ");
    scanf("%d",&length);

    //Step1 Allocate the memory
    Arr=(int *)calloc(length, sizeof(int));
    if(Arr==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }

    //Step 2 Use the memory

    //Step 3 Free memory
    free(Arr);

    return 0;
}