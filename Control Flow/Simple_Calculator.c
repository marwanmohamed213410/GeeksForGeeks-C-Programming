# include <stdio.h>

int main()
{
    char op;
    double num1,num2,res;

    printf("Enter an operator (+, -, *, /):");
    scanf("%c",&op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        return 1;
    }

    printf("result= %.2lf",res);
}