# include <stdio.h>

int main()
{
    int num=0;
    int fact=1;

    printf("Find the Factorial of a Number: ");
    scanf("%d",&num);

    for(int i = 1; i<=num; i++)
    {
        fact*=i;
    }

    printf("Factorial of %d is: %d",num,fact);
}