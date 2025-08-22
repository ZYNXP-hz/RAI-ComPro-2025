#include <stdio.h>
int main ()
{
    int num[10];
    for(int N=0 ; N<10 ; N++)
    {
        printf ("Enter the value %d here:",N+1);
        scanf("%d",&num [N]);
    }
    printf("Values in array are:");
    for(int N=0 ; N<10 ;N++)
    {
        printf("%d",num[N]);
        if(N<9){
            printf(",");
        }
    }printf("\n");
    return 0;
}
