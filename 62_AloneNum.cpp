#include <bits/stdc++.h>

using namespace std;

map<int,int> mp;
int a[100100];

int main(){
    int q,n,i;
    scanf("%d" , &q);

    while(q--){
        scanf("%d", &n);

        for(i =0 ; i < n ; i++){
            scanf("%d", &a[i]);
            mp[a[i]]++;
        }
        int ch = 1;
        for( i = 0 ; i < n ; i++){
            if(mp[a[i]] == 1){
                printf("%d ", a[i]);
                ch =0;
            }
        }
        if(ch != 0){
            printf("No Alone Num");
        }
        printf("\n");
        mp.clear();
    }

    return 0;

}
