#include <bits/stdc++.h>

using namespace std;

int gcd(int a , int b){
    if(a%b == 0){
        return b;
    }
    return gcd(b,a%b);
}

int main(){

    int ans, num;

    scanf("%d %d", &ans , &num);

    ans = gcd(ans,num);

    printf("%d",ans);
    return 0;
}
