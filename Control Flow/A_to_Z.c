# include <stdio.h>

int main()
{
    printf("Alphabets from (A-Z) are:\n");
    for(char i = 'A'; i<='Z'; i++)
    {
        printf("%c ",i);
    }

    printf("\n");

    printf("\nAlphabets from (a-z) are:\n");
    for(char i = 'a'; i<='z'; i++)
    {
        printf("%c ",i);
    }
}