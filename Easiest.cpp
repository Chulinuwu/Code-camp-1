#include <bits/stdc++.h>
using namespace std;

priority_queue <int> pq;

int main(){

    int q;
    scanf("%d", &q);
    while(q--){
        char opr;
        scanf(" %c", &opr);
        if(opr == 'A'){
            int val;
            scanf("%d", &val);
            pq.push(-val);
            continue;
        }
        if(opr == 'B'){
            if(pq.empty() != 0){
                printf("-1\n");
                continue;
            }
            printf("%d\n", -pq.top());
            pq.pop();
        }
    }

    return 0;
}
