#include <bits/stdc++.h>

using namespace std;

int a[100100];

int main(){
    int n,i,q;

    scanf("%d %d" , &n , &q);

    for(i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    sort(a,a+n);
    while(q--){
        scanf("%d", &i);
        printf("%d\n",lower_bound(a,a+n,i)-a);
    }
    return 0;
}
