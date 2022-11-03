#include <stdio.h>
#include <math.h>

int main(){

int A;
int B;

scanf("%d %d", &A, &B);

printf("Plus: %.2lf\n", (double)A+(double)B);
printf("Minus: %.2lf\n", (double)A-(double)B);
printf("Multiply: %.2lf\n", (double)A*(double)B);
printf("Divide: %.2lf\n", (double)A/(double)B);
printf("Modulo: %d.00\n", A%B);
printf("Power: %.2lf\n", pow((double)A,(double)B));
printf("Root: %.2lf", pow((double)A,pow((double)B,-1)));

return 0;

}
