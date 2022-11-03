#include <bits/stdc++.h>

int main(){

    int n,i;

    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){
        for(j = n ; j > i  ; j--){
            printf("*");
        }
    }


    return 0;

}

