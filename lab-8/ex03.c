#include <stdio.h>
int Ans(int a,int b);
int main()
{
    int first,last,ans;

    printf("Enter the two integers:");
    scanf("%d %d",&first,&last);
    ans=Ans(first,last);

    
    printf("Sum of squres of %d and %d is %d\n",first,last,ans);

    return 0;
}    
int Ans(int a,int b)
{
    int ans = (a*a) + (b*b);
    return ans;
}    

