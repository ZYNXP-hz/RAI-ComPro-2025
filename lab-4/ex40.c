#include<stdio.h>
int main()
{
    int num;
    printf("Multiplication table\n");
    for (num=1;num<=12;num++)
    {
        printf("%4d * %-2d = %-3d\n",5,num,5*num);
    }

    return(0);

}