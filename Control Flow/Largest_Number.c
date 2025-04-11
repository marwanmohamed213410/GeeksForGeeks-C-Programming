# include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Enter your first num: ");
    scanf("%d",&num1);
    printf("Enter your second num: ");
    scanf("%d",&num2);
    printf("Enter your third num: ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        printf("%d is largest number",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is largest number",num2);
    }
    else
    {
        printf("%d is largest number",num3);
    }
   return 0; 
}