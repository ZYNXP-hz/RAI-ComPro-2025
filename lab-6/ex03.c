#include <stdio.h>
#include <math.h>
int main ()
{
    struct coordinate
    {
        float x;
        float y;
    }s[2];
    for(int i=0;i<2;i++)
    {
        printf("x%d:",i+1);
        scanf("%f",&s[i].x);
        printf("y%d:",i+1);
        scanf("%f",&s[i].y);
    }
    float d;
    d=sqrt((s[1].x-s[0].x)*(s[1].x-s[0].x)+(s[1].y-s[0].y)*(s[1].y-s[0].y));
    printf("Distance between (%.1f,%.1f)and(%.1f,%.1f) is %.2f unit(s)",s[0].x,s[0].y,s[1].x,s[1].y,d);
    printf("\n");
    return 0;
}
