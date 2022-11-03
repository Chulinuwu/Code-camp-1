#include <bits/stdc++.h>

using namespace std;

vector <int> g[1010];
int mark[1010];

void dfs(int u){
    mark[u] = 1;
    for(auto x : g[u]){
        if(mark[x]){
            continue;
        }
        dfs(x);
    }
}

int main(){
    int n,m,q;

    scanf("%d %d %d", &n ,&m ,&q);

    for(int i = 1 ; i <= m ; i++){
        int u,v;
        scanf("%d %d", &u , &v);
        g[u].push_back(v);
    }

    while(q--){
        memset(mark, 0 , sizeof mark);
        int st,en;
        scanf("%d %d", &st , &en);
        dfs(st);
        if(mark[en] == 1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }

    return 0;

}
