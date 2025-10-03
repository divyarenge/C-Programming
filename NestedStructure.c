#include<stdio.h>

struct Demo
{
        int i ;
        float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo obj;        //NESTED

};

int main()
{
    printf("Size of Hello structure is : %lu\n",sizeof(struct Hello));
    return 0;
}