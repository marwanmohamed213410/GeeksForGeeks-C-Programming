# include <stdio.h>

int main()
{
    int length;
    int  width;

    printf("Enter length of rectangle: ");
    scanf("%d",&length);
    printf("Enter width of rectangle: ");
    scanf("%d",&width);
    
    printf("Area of rectangle= %d \n",length*width);
    printf("Perimeter of rectangle= %d\n", 2*(length + width));
}