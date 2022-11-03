#include <bits/stdc++.h>

int main(){
    int sq,i,n;
    int cnt = 0;

    scanf("%d", &n);

    sq = sqrt(n);

    for(i = 1 ; i <= sq ; i++){
        if(n%i == 0){
        cnt++;
        }
    }

    if(cnt == 1 && n != 1){
        printf("Yes");
    }
    else{
    printf("No");
    }

    return 0;
}
