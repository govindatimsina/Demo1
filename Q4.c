#include <stdio.h>
#include <conio.h>
int main()
{
    float num1, num2, result;
    printf("Enter your numbers:\n");
    scanf("%f%f", &num1, &num2);
    result = num1+num2;
    printf("The sum is: %f", result);
    result = num1-num2;
    printf("\nThe difference is: %f", result);
    result = num1*num2;
    printf("\nThe product is: %f", result);
    result = num1/num2;
    printf("\nThe division is: %f", result);

    getch();
    return 0;
}
