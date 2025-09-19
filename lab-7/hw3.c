#include<stdio.h>
int main()
{
    struct s {
        int num1;
        int num2;
        int sum;
    }; struct s num;
    struct s *pt = &num;

    printf("First Number : ");
    scanf("%d",&pt -> num1);
    printf("Second NUmber : ");
    scanf("%d",&pt ->num2);

    pt -> sum = pt -> num1 + pt -> num2;

    printf("\nResult\n");
    printf("First Number : %d\n",pt -> num1);
    printf("Second Number : %d\n",pt -> num2);
    printf("Summation : %d\n",pt -> sum);

    return(0);
}