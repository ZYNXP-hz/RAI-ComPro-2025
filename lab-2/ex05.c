#include<stdio.h>
int main()
{
    int age;
    float height;
    char university[20],name[20];

    printf("Enter your name:");
    scanf("%[^\n]",name);

    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter your height:");
    scanf(" %f",&height);

    printf("Enter your university:");
    scanf(" %[^\n]",university);

    printf("Hi! Everyone. This is K.%s from %s. I am %d year old and my height is \n%f can tall.",name,university,age,height);


    return 0;
}