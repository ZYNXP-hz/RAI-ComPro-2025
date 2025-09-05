#include<stdio.h>
int main()
{
    struct profile
    {
        char name[100];
        int age;
        float score;
    }s[3];
    for(int i=0;i<3;i++)
    {
        printf("Student %d's name:",i+1);
        scanf(" %[^\n]*c",s[i].name);
        printf("Student %d's age:",i+1);
        scanf("%d",&s[i].age);
        printf("Student %d 's score:",i+1);
        scanf("%f",&s[i].score);
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        printf("\nStudent %d name is '%s' age %d and score %.2f",i+1,s[i].name,s[i].age,s[i].score);
    }printf("\n");
    int max=0;
    for(int i=0;i<3;i++)
    {
        if(s[i].score>s[max].score)
        {
            max=i;
        }
    }
    printf("The highest score belongs to %s at %.2f scores!",s[max].name,s[max].score);
    printf("\n");
    return 0;
}