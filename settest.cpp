#include <bits/stdc++.h>

using namespace std;

multiset <int> a;

int main(){

    int n;
    int m;

    scanf("%d" , &n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &m);
        a.insert(m);
    }

    printf("%d" , a.size());

    return 0;
}
