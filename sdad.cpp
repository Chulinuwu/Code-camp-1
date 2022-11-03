#include <bits/stdc++.h>

using namespace std;

int a[1010];

int main(){

    int n , q;

    scanf("%d", &n);

    for(int i = 0; i < n ;i++){
        scanf("%d", &a[i]);
    }

    sort(a,a+n);

    for(int i = 0; i < n ;i++){
        printf("%d ", a[i]);
    }

    return 0;
}
