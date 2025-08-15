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
        printf("Hello\n",hi);

    } else if (choice == 2) {
        printf("Thank you",num1-num2);

    } else if (choice == 3) {
        printf("\n",num1*num2);

    }else {
        printf("Sorry\n");
    }
    return(0);

}