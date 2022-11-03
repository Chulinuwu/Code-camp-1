#include <bits/stdc++.h>

using namespace std;

vector <int> g[1010];
queue <int> qu;
int mark[1010];


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
        mark[st] = 1 ;
        qu.push(st);
        while(!qu.empty()){
            int u = qu.front();
            qu.pop();
            for(auto x : g[u]){
                if(mark[x] == 1){
                    continue;
                }
                mark[x] = 1;
                qu.push(x);
            }
        }
        if(mark[en]){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;

}
