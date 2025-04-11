# include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;

    printf("Enter your num: ");
    scanf("%d",&num);

    for(int i = 1; i<=num ;i++)
    {
        sum += i; 
    }
    printf("sum of n numbers is: %d",sum);
    return 0;
}