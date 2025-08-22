#include<stdio.h>
int main()
{
    int c;
    printf ("Decimal   ASCII\n");
    for (c=33;c<=55;c++)
    {
        printf ("%4d\t %4c\n",c,c);
    }

    return 0;

}