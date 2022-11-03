#include <bits/stdc++.h>

using namespace std;

vector <int> g[500100];

int rock[500100];
int dp[500100];

int main(){

    int n,m,k,i;

    sacnf("%d %d %d", &n , &m ,&k);

    while(m--){
        scanf("%d %d", &a , &b);
        g[a].puh_back(b);
    }
    while(k--){
        scanf("%d", &a);
        rock[a] = 1;
    }
    for(i = 1 ; i <= n ; i++){

        if(dp[i] == 0){
            continue;
        }
        if(rock[i] == 0){
            dp[i+1] = 1;
        }
        for(auto x : g[i]){
            dp[x] = 1;

        }

    }
    printf("%d ", dp[n]);

    if(dp[n] == 0){
        for(i = m ; i >= 1 ; i--){
            if(dp[i] == 1){
             printf("%d\n",i);
             return 0;
            }

        }

    }
    return 0;
}
