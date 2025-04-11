# include <stdio.h>

int main()
{
    int prime_num = 0;
    int cnt = 0;
    printf("Enter your num: ");
    scanf("%d",&prime_num);

    if(prime_num <= 1)
        printf("%d is not prime number");
    else{
    for(int i = 1; i <= prime_num; i++)
    {
        if(prime_num % i == 0)
        {
            cnt++;
        }

        if(cnt > 2) break;
    }
    if(cnt == 2)
        printf("%d is prime number",prime_num);
    else
        printf("%d is not prime number",prime_num);
    return 0;
    }
}