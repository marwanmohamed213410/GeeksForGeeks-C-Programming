# include <stdio.h>

int num1, num2, sum;

int main()
{
    printf("Enter your first num: ");
    scanf("%d",&num1);
    printf("Enter your second num: ");
    scanf("%d",&num2);
    sum = num1 + num2;   
    printf("sum = %d",sum);
    return 0;
}