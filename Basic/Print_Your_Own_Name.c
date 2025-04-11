# include <stdio.h>

int main()
{
    char name[100];
    char num;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("your name is: %s \n",name);
    printf("Enter your Number: ");
    scanf("%d",&num);
    printf("your number is: %d",num);
    return 0;
}