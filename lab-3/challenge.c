#include<stdio.h>
int main()
{
    int cal,phy,com;
    char calgrade,phygrade,comgrade;
    float calper,phyper,comper;
    float gpa;

    printf("Calculus score = ");
    scanf("%d", &cal);
    printf("Physics score = ");
    scanf("%d", &phy);
    printf("Compro score = ");
    scanf("%d", &com);

   
    if (cal >= 80) {
        calgrade = 'A';
        calper = 4.0;
    } else if (cal >= 70) {
        calgrade = 'B';
        calper = 3.0;
    } else if (cal >= 60) {
        calgrade = 'C';
        calper = 2.0;
    } else if (cal >= 50) {
        calgrade = 'D';
        calper = 1.0;
    } else {
        calgrade = 'F';
        calper = 0.0;
    }

    
    if (phy >= 80) {
        phygrade = 'A';
        phyper = 4.0;
    } else if (phy >= 70) {
        phygrade = 'B';
        phyper = 3.0;
    } else if (phy >= 60) {
        phygrade = 'C';
        phyper = 2.0;
    } else if (phy >= 50) {
        phygrade = 'D';
        phyper = 1.0;
    } else {
        phygrade = 'F';
        phyper = 0.0;
    }

    
    if (com >= 80) {
        comgrade = 'A';
        comper = 4.0;
    } else if (com >= 70) {
        comgrade = 'B';
        comper = 3.0;
    } else if (com >= 60) {
        comgrade = 'C';
        comper = 2.0;
    } else if (com >= 50) {
        comgrade = 'D';
        comper = 1.0;
    } else {
        comgrade = 'F';
        comper = 0.0;
    }

    
    gpa = (calper+phyper+comper)/3;
    
    printf("\n");
    printf("Subject     Score     Grade     Grade\n");
    printf("--------------------------------------\n");
    printf("Cal         %d        %c         %.1f\n",cal,calgrade,calper);
    printf("Physics     %d        %c         %.1f\n",phy,phygrade,phyper);
    printf("Compro      %d        %c         %.1f\n\n",com,comgrade,comper);
    printf("GPA : %.2f\n",gpa);

    return (0);

}