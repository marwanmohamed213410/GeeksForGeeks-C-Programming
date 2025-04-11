# include <stdio.h>

int main()
{
    float num1 , num2, multi;
    printf("Enter your first num: ");
    scanf("%f",&num1);
    printf("Enter your second num: ");
    scanf("%f",&num2);
    multi =  num1 * num2;
    printf("multiply of %.2f * %.2f = %.2f",num1,num2,multi);
    return 0;
}