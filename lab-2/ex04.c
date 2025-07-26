#include<stdio.h>
int main()
{
    int studentid;
    float programming,physics,calculus,gpa;
    char name[20];

    printf("Enter your name:");
    scanf("%[^\n]",name);
    
    printf("Enter your student id:");
    scanf("%d",&studentid);

    printf("Enter your programming score:");
    scanf(" %f",&programming);

    printf("Enter your physics score:");
    scanf(" %f",&physics);

    printf("Enter your calculus score:");
    scanf(" %f",&calculus);
    
    gpa=(programming + physics + calculus)/3;
    printf("Hi  %s(%d) Your GPA is %.2f\n",name, studentid, gpa);


    return 0;
}