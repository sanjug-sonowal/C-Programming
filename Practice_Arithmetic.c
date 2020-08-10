/*
Write a c program to calculate sum,subtract,multiply,division
 of the number of n take input
from the user(+,-,*,/)
*/
#include<stdio.h>

int main()
{
    int number;
    printf("Enter the value of n : ");
    scanf("%d",&number);

    int Add = number + number;
   int Subtract= number - number;
    int multiply = number * number;
   float divide = number / number;
    printf("Your answer is %d\n",Add);
    printf("Your answer is %d\n",Subtract);
    printf("Your answer is %d\n",multiply);
    printf("Your answer is %.2f\n",divide);
    return 0;
}