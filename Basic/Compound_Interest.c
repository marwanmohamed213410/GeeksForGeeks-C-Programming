# include <stdio.h>
# include <math.h>

int main()
{
    float principal;
    float Time;
    float Rate;
    float amount;
    float C_I;

    printf("Enter principal: ");
    scanf("%f",&principal);
    printf("Enter Time: ");
    scanf("%f",&Time);
    printf("Enter Rate: ");
    scanf("%f",&Rate);
    
    amount = principal * pow((1 + Rate / 100),Time);

    C_I = amount - principal;

    printf("Compound Interest = %.2f",C_I);

    return 0;  
}