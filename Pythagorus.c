#include <stdio.h>

int main(){
double a,b,c;

scanf("%lf %lf %lf",&a,&b,&c);

if(a == 0.00){
a = sqrt(pow(c,2)-pow(b,2));
printf("%.2lf", a);
}
else if(b == 0.00){
b = sqrt(pow(c,2)-pow(a,2));
printf("%.2lf", b);
}
else if(c == 0.00){
c = sqrt(pow(a,2)+pow(b,2));
printf("%.2lf", c);
}

return 0;
}
