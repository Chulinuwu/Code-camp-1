#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , i , cnt , sq;

    cnt = 0;

    scanf("%d" , &n);

    sq = sqrt(n);

    for(i = 1 ; i < sq ; i++){
        if(n%i == 0){
            cnt++;
        }
    }

    if(cnt == 2 && n != 1){
        printf("Yes\n");
    }
    else{
        printf("No");
    }

    return 0;

}
