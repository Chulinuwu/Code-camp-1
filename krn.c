#include <stdio.h>

long long gcd(long long a, long long b){

    if(a%b ==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){

    long long i , n , ans , num , ansk;

    scanf("%lld %lld", &n , &ans);

    for(i = 0 ; i < n-1 ; i++){
    scanf("%lld",&num);
    ans = ans*num/gcd(ans,num);
    }

    printf("%lld\n" , ans);

    return 0;
}
