#include <stdio.h>
int main()
{
    int num[8];
    int min , max;
    for(int n=0;n<8;n++)
    {
        printf("Enter nunber %d:",n+1);
        scanf("%d",&num[n]);
        if(n==0){
            min = max = num[n];
        }else{
            if(num[n]<min){
                min = num[n];
            }
            if(num[n]>max){
                max = num[n];
            }
        }        
        

    }
    printf("Smallest number%d\n",min);
    printf("Largest number%d\n",max);
    return 0;
}    


