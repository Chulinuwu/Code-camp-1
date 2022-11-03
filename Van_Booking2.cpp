#include <bits/stdc++.h>

using namespace std;

struct HEAP{
    int idx, days;
    bool operator < (const HEAP & o) const{
        if(days != o.days){
            return days > o.days;
        }
        return idx > o.idx;
    }
};

priority_queue <HEAP> pq;

int main(){
    int n,k;
    int i;
    scanf("%d %d", &n , &k);

    for(i = 1 ; i <= k ; i++){
        pq.push({i,0});
    }
    for( i = 1 ; i <= n ; i++){
    int t;
    scanf("%d", &t);
    HEAP top = pq.top();
    pq.pop();
    printf("%d\n", top.idx);

    pq.push({top.idx , top.days + t});
    }

    return 0;
}
