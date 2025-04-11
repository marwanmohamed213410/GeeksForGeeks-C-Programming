# include <stdio.h>

int main()
{
    float F;
    float C;

    printf("Enter Temperature in Farenheit: ");
    scanf("%f",&F);

    C = (F - 32) * 5/9;

    printf("Temperature in Celsius: %.2f",C);
    return 0;
}