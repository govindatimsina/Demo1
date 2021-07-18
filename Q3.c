#include <stdio.h>
int main()
{
    float p,r,t,int_amt;
   printf("Input principle to find simple interest(In Rs.):  ");
   scanf("%f",&p);
    printf("\nInsert the time to calculate the interest(In years):  ");
   scanf("%f", &t);
    printf("\nInput the rate of the interest(In percentile):  ");
   scanf("%f", &r);
   int_amt=(p*r*t)/100;
   printf("Simple interest = %f",int_amt);
   return 0;
}
