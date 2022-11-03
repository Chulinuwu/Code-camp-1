#include <stdio.h>

int dp[100100];

int main(){

    int n,m,r,s,i,q;

    scanf("%d %d", &n , &m);

    while(m--){
    scanf("%d %d", &r , &s);
    dp[r]++;
    dp[s+1]--;

    }

    for(i = 1 ; i <= n ; i++){
    dp[i] += dp[i-1];
    }

    scanf("%d" , &q);

    while(q--){

    scanf("%d", &r);

    printf("%d\n",dp[r]);

    }

    return 0;
}
