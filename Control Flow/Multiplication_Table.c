# include <stdio.h>

int main()
{
    int num;
    int res = 0;

    printf("Enter your number: ");
    scanf("%d",&num);

    for(int i = 0; i <= 10; i++)
    {
        res = num * i;
        printf("%d X %d = %d\n",i,num,res);
    }
}