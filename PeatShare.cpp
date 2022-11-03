#include <bits/stdc++.h>

using namespace std;

int a[100100];
int main(){

    int q,N,i,j,k;
    int sumLeft,sumRight;
    int mark = 0;
    scanf("%d", &q);

    while(q--){
        scanf("%d", &N);
        for(i = 1 ; i <= N ; i++){
            scanf("%d" , &a[i]);
        }
        for(i = 1 ; i <= N ; i++){ // first solution
            for(j = 1 ; j <= i ; j++){
                 sumLeft += a[j];
            }
            for(k = N-i+1 ; k >= i ; k--){
                sumRight += a[k];
            }
            if(sumLeft == sumRight){
                printf("%d" , i);
                mark = 1;
            }
            sumRight = 0;
            sumLeft = 0;
        }
        for(i = 1 ; i <= N ; i++){ // second solution
            for(j = 1 ; j <= i ; j++){
                 sumLeft += a[j];
            }
            for(k = N-i+1 ; k >= i ; k--){
                sumRight += a[k];
            }
            if(sumLeft == sumRight){
                printf("%d" , i);
            }
            sumRight = 0;
            sumLeft = 0;
        }
        if(mark == 0){
            printf("NO");
        }
        mark = 0;
    }

    return 0;
}

/*
1
8
3 1 2 1 1 2 1 1
*/
