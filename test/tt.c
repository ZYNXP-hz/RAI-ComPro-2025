#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter integer #1 : ");
    scanf("%d",&num1);
    printf("Enter integer #2 : ");
    scanf("%d",&num2);
    printf("Enter integer #3 : ");
    scanf("%d",&num3);
    printf("\n");
    printf("Result : \n");
    int Min,Max;
    if (num1 <= num2 && num1 <= num3 ) {
        Min = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        Min = num2;
    } else {
        Min = num3;
    }
    printf("Minimum: %d\n",Min);
    if (num1 >= num2 && num1 >= num3) {
        Max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        Max = num2;
    } else{
         Max = num3; 
    }
    int Sum;
    float Average;
    printf("Maximum: %d\n",Max);
    Sum =(num1 + num2 + num3);  
    printf("Sum: %d\n",Sum);
    Average =(float)(num1 + num2 + num3)/3;
    printf("Average: %.2f\n",Average);

    return 0;
}