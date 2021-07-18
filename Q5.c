#include <stdio.h>
#include <conio.h>
int main()
{
    int length;
    int breadth;
    int  Area;
    int Perimeter;

    printf("Insert the length of the rectangle:(in meter) ");
    scanf("%d", &length);
    printf("Insert the breadth of the rectangle: (in meter) ");
    scanf("%d", &breadth);

    Area = length*breadth;
    printf("The area of your rectangle is: %d*%d=%d sq.m.", length, breadth, Area);

    Perimeter = 2*(length+breadth);
    printf("\nThe perimeter of your rectangle is: 2(%d+%d)=%d m.", length, breadth, Perimeter);

    getch();
    return 0;
}
