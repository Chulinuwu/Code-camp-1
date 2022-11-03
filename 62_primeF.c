#include <bits/stdc++.h>

using namespace std;


int main(){

    int q,n,i;

    scanf("%d", &q);

    while(q--){
        for(i = 2 ; num > i ; i++){
            scanf("%d", &n);
            while(num%i == 0){
                printf("%d",i);
                num = num / i;
            }
        }
    }

    return 0;
}
