#include <stdio.h>
int main()
{
    int i;
    struct time
    {
        int minute;
        int second;
    }s[3];
    for( i=0;i<3;i++)
    {
        printf("Time input (m:s):");
        scanf("%d:%d",&s[i].minute,&s[i].second);
    }
    int totalSecond=0;
    for (i = 0; i < 3; i++) {
        totalSecond += (s[i].minute * 60) + s[i].second;
    }

    printf("Total time elasped:%d second(s)",totalSecond);
    printf("\n");
    return 0;
}