#include <stdio.h>
#include <stdlib.h>

int a[20];
int b[20];
int n,r,k;
int cnt = 0;

void permu(int state){
    int i;
    if(state == r){
        cnt++;
        if(cnt == k){
            for(i =0 ; i < r ; i++){
                printf("%d ", b[i]);
            }
            printf("\n");
            exit(0);
        }
    }
    for(i = 1 ; i<= n ; i++){
        if(!a[i]){
            a[i] = 1;
            b[state] = i;
            permu(state + 1);
            a[i] = 0;
        }
    }
}

int main(){
    scanf("%d %d %d", &n ,&r , &k);

    permu(0);

    return 0;
}
