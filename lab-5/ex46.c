#include <stdio.h>
int main()
{
    int matrix[3][3],r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
          printf("Enter numbers [%d][%d] :",r,c);
          scanf("%d",&matrix[r][c]);
        }
    }
    printf("Matrix A :\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%5d",matrix[r][c]);
        }
        printf("\n") ;
    }
    printf("\nDiagonal Matrix of A :\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
          if(c==r)
          {
            printf("%5d",matrix[r][c]);
          }else{
            printf("    0");
          }
        }
        printf("\n");
    }
    return 0;     
}
