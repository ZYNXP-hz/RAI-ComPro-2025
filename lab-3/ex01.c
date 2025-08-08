#include<stdio.h>
int main()
{
   int number1;
   int number2;

   while (number1!=number2){
    printf("Enter a number : ");
   scanf("%d", &number1);
   printf("Enter a number : ");
   scanf("%d", &number2);
   if (number1!=number2){
    printf("Does not match. Try again\n");


   } else {
    printf("Match\n");
    break;
   }
   }

    return (0);

}