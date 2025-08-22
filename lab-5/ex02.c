#include <stdio.h>
int main()
{
    int oringinal[9]={1,2,3,4,5,6,7,8,9};
    printf("Reversed Array:");
    for (int n=8;n>0;n--)
    {
        printf("%2d",oringinal[n]);
    }printf("\n");
    return 0;
        
    
}