#include <stdio.h>
int main()
{
    struct vector
    {
        float x;
        float y;
    }s[2];
   
        printf("u_x:");
        scanf("%f",&s[0].x);
        printf("u_y:");
        scanf("%f",&s[0].y);
        printf("u_x:");
        scanf("%f",&s[1].x);
        printf("u_y:");
        scanf("%f",&s[1].y);
        float vectori,vectorj;
        vectori = (s[0].x + s[1].x);
        vectorj = (s[0].y + s[1].y);

        printf("Resultant vector is equvalence to %.1fi + %.1fj",vectori,vectorj);
        printf("\n");
        
    return 0;
}