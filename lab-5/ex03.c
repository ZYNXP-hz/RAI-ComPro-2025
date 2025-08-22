#include <stdio.h>
int main()
{
    int num[5];
    int total=0;
    int max = num[0];
    for(int N=0;N<5;N++)
    {
        printf("Enter the marks of student %d:",N+1);
        scanf("%d",&num [N]);
        total=total+num[N];
        if (num[N]>max)
        {
            max = num[N];
        }

    }
    printf("Total Marks :%d\n",total);
    printf("Highest Marks:%d\n",max);
    return 0;
}