#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a%b == 0){
    return b;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int num,ans,i,n;

    scanf("%d %d", &n , &ans);

    for(i = 0 ; i < n-1 ; i++){
        scanf("%d", &num);
        ans = gcd(ans,num);
    }

    printf("%d" , ans);
    return 0;
}
