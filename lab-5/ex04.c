#include <stdio.h>
int main()
{
    int num[10];
    int odd =0 ;
    int even = 0;
    for(int n=0;n<10;n++)
    {
        printf("Enter value %d:",n+1);
        scanf("%d",&num[n]);
        if (num[n]%2 == 0){
            even++;
        }else{ odd++; }
        
    }
    printf("Even numbers:%d\n",even);
    printf("Odd numbers:%d\n",odd);
    return 0;
}
