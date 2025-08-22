#include<stdio.h>
int main()
{
    int vol=0,alp=0,count;
    char let;
    for (count=0;count<10;count++)
    {
        printf("\nEnter letter a-z : ");
        scanf(" %c",&let);
        if ((let=='a') || (let=='e') || (let=='i') || (let=='o') || (let=='u'))
        vol++;
    else
        alp++;
    }
        printf("\n***Result***\n");
        printf("Vowel(a,e,i,o,u) = %d\n",vol);
        printf("Other letter     = %d\n",alp);

    return (0);
}