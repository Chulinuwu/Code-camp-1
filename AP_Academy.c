#include <bits/stdc++.h>

using namespace std;

int l[1001000],r[1000100];

int main(){
    int n,i,s,e;

    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){
        scanf("%d %d", &s , &e);
        l[s]++,r[e]++;
    }
    for(i = 1 i <= 1000000 ; i++){
        l[i] += l[i-1];
        r[i] += r[i-1];
    }

    scanf("%d", &q);

    while(q--){
        scanf("%d %d" , &s , &e);
        printf("%d\n" , l[e] - r[s-1]);
    }

    return 0;
}
