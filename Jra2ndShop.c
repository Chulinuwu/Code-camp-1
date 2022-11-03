#include <bits/stdc++.h>

using namespace std;

int mark[100];

void dfs(int u , int now){
if( u == 2 && now != 2 ){
ans.push_back(now);
return;
}
for(auto x : adj[u]){
    if(mark[x]){
    continue;
    }
    mark[x] = 1;
    dfs(x, now*10+x);
    mark[x] = 0;
}
}

int main(){
    int n , u , v;

    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &u , &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(2,2);

    sort(ans.begin(), ans.end());

    for(auto x : ans){
        printf("%d\n", x);
    }

    return 0;
}
