#include<stdio.h>
int main()
{
    int max;
    float value;
    char character;

    printf("Please enter an Integer value:");
    scanf(" %d",&max);
    printf("Integervalue :%d\n",max);

    printf("Please enter a float value:");
    scanf("%f",&value);
    printf("Integervalue :%.1f\n",value);

    printf("Please enter a character:");
    scanf(" %c",&character);
    printf("Integervalue :%c\n",character);


    return 0;
}