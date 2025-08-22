#include<stdio.h>
int main()
{
    int num=0,result=0;
    do {
        printf("Enter a number : ");
        scanf("%d",&num);

        if (num!=0) {
            result += num;
        } else {
            printf("Result : %d\n",result);
        }
    } while (num!=0);

    return(0);

}