#include <bits/stdc++.h>

using namespace std;

struct soldier{
    int id,rk,idx;

    bool operator < (const soldier & o) const{
        if(rk != o.rk){
        return rk < o.rk;
        }
        return idx > o.idx;
    }
};

priority_queue<soldier> pq;

int main(){
    int n ,r , i;

    scanf("%d %d", &n ,&r);

    for(i = 0 ; i < n ; i++){
        int opr,id,rk;
        scanf("%d", &opr);
        if(opr == 1){
            scanf("%d %d", &id , &rk);
            pq.push({id,rk,i});
        }
        else{
            if(pq.empty() != 0){
                printf("-1\n");
            }
            else{
                printf("%d\n", pq.top().id);
                pq.pop();
            }
        }
    }
    return 0;
}
