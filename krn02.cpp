#include <bits/stdc++.h>

int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int n,ans,num,i;

    scanf("%d %d", &n , &ans);

    for(i = 0 ; i < n-1 ; i++){
        scanf("%d", &num);

        ans = ans*num / gcd(ans,num);
    }

    printf("%d" , ans);

    return 0;
}
