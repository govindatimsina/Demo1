#include <stdio.h>
int main()
{
    int num1,num2, result;
    printf("Enter the numbers you want to add:\n");
    scanf("%d%d", &num1, &num2);
    result = num1+num2;
    printf("THe result of your sum is: %d", result);
    return 0;
}
