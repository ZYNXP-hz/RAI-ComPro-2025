#include<stdio.h>
int main ()
{
    int num, a, b;
    char space=' ';

    printf("Enter number : ");
    scanf("%d", &num);
    //continue
    for (a=1; a<=num; a++)
    {
        printf ("\n");
        for (b=1; b<=num; b++)
        {
            if (a==1 || a==num || b==1 || b==num)
            printf ("*");
        else
        printf ("%c", space);
    }
}

return(0);

}