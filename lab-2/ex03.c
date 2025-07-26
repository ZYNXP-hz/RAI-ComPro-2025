#include<stdio.h>
int main()
{
    int Age;
    float Height,weight;
    char name[20],Education[20],gender;

    printf("Enter your name:");
    scanf("%[^\n]",name);
    printf("Enter your Age:");
    scanf("%d",&Age);
    printf("Enter your weight:");
    scanf(" %f",&weight);
    printf("Enter your gender:");
    scanf(" %c",&gender);
    printf("Enter your Educaation Qualification:");
    scanf(" %[^\n]",Education);
    printf("Name :%s\nAge :%d\nweight :%f\n gender :%c\nEducation :%s\n",name,Age,weight,gender,Education);


    return 0;
}