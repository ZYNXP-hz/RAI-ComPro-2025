#include<stdio.h>
struct student 
{
        char name[20];
        int grade;
} student[3];

float cal_average(struct student student[], int num)
 {
    float aver = 0;
    if(num > 0) {
        for(int i = 0; i < num; i++)
        {
            aver += student[i].grade;
        }
        aver = aver / num;
    }
    return aver;
}

int high(struct student student[], int num) 
{
    int max = student[0].grade;
    for(int i = 1; i < num; i++) 
    {
        if(student[i].grade > max) 
        {
            max = student[i].grade;
        }
    }
    return max;
}

int low(struct student student[], int num) 
{
    int min = student[0].grade;
    for(int i = 1; i < num; i++) 
    {
        if(student[i].grade < min) 
        {
            min = student[i].grade;
        }
    }
    return min;
}

void passed(struct student student[], int num) 
{
    for(int i = 0; i < num; i++) 
    {
        if(student[i].grade >= 60) 
        {
            printf("%s\n",student[i].name);
        }
    }
}

int main()
{
    int num;

    printf("Enter number of students : ");
    scanf("%d",&num);
    printf("\n");

    for(int i = 0; i < 3; i++) 
    {
        printf("Enter name of student %d : ",i+1);
        scanf("%s",student[i].name);
        printf("Enter grade of %s : ",student[i].name);
        scanf("%d",&student[i].grade);
        printf("\n");
    }

    printf("--- Results ---\n");
    float aver = cal_average(student, num);
    printf("Average grade : %.2f\n",aver);
    int max = high(student, num);
    printf("Highest grade : %d\n",max);
    int min = low(student, num);
    printf("Lowest grade : %d\n",min);
    printf("\n");

    printf("Students who passed : \n");
    passed(student, num);

    return(0);
}