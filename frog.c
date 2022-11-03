#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    double n,m,ans;

    scanf("%lf %lf", &n , &m);

    ans = m/n;

    printf("%d", (int)ceil(ans));
}
