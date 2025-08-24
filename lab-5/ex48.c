#include<stdio.h>
int main()
{
    int mar[3][3]={1,0,-1,-1,2,3,2,4,5};
    int A[3][3];
    int r,c,s;
    int sum=0;

    printf("Martrix A = \n");
    for(r=0;r<3;r++) {
        for(c=0;c<3;c++) {
            printf("%5d",mar[r][c]);
        }
        printf("\n");
    }
    for (r=0;r<3;r++) {
        for(c=0;c<3;c++) {
            for(s=0;s<3;s++) {
                sum = sum + mar[r][s] * mar[s][c];
            }
            A[r][c] = sum;
            sum = 0;
        }
    }
    printf("A x A = \n"); 
    for (r=0;r<3;r++) {
        for(c=0;c<3;c++) {
            printf("%5d",A[r][c]);
        }
        printf("\n");
    }
    return(0);
}