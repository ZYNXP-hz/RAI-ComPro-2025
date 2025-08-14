#include<stdio.h>
int main()
{
    int num1,num2,choice;

    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("Calculator Menu : \n");
    printf("1. + \n");
    printf("2. - \n");
    printf("3. * \n");
    printf("4. / \n");
    printf("5. %% \n");

    printf("Choose Menu : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("Ans : Num1 + Num2 = %d\n",num1+num2);
        break;
        case 2:
        printf("Ans : Num1 - Num2 = %d\n",num1-num2);
        break;
        case 3:
        printf("Ans : Num1 * Num2 = %d\n",num1*num2);
        break;
        case 4:
        printf("Ans : Num1 / Num2 = %.1f\n",(double)num1/num2);
        break;
        case 5:
        printf("Ans : Num1 %% Num2 = %d\n",num1%num2);
        break;
    }

    return(0);

}