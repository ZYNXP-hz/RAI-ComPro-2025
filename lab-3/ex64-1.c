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

    if (choice == 1) {
        printf("Ans : Num1 + Num2 = %d\n",num1+num2);

    } else if (choice == 2) {
        printf("Ans : Num1 - Num2 = %d\n",num1-num2);

    } else if (choice == 3) {
        printf("Ans : Num1 * Num2 = %d\n",num1*num2);

    } else if (choice == 4) {
        printf("Ans : Num1 / Num2 = %.1f\n",(double)num1/num2);

    } else if (choice == 5) {
        printf("Ans : Num1 %% Num2 = %d\n",num1%num2);
    }else {
        printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }
    return(0);

}