# include <stdio.h>

int main()
{
    float Principal;
    float Rate;
    float Time;
    float Simple_Interest;
    
    printf("Enter Principal: ");
    scanf("%f",&Principal);
    printf("Enter Rate: ");
    scanf("%f",&Rate);
    printf("Enter Time: ");
    scanf("%f",&Time);

    Simple_Interest = Principal * Rate * Time / 100;

    printf("Simple_Interest = %.2f",Simple_Interest);

    return 0;
}