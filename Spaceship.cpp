#include <bits/stdc++.h>

using namespace std;

int x[600];
int y[600];
int z[600];
int M[600];
int K[600];
int C[600];
int n,m,i;
int cntex = 0;

void solve(int sum,int sumM,int sumK,int sumC){

    int expense[10000];

    for(i = 0 ; i <= m ; i++){
        if(M[i+1] >= 0 && K[i+1] >= 0 && C[i+1] >= 0){
            sum -= 1;
        }
}
    printf("%d",sum);
}

int main(){


    scanf("%d", &n);

    scanf("%d %d %d" , &x[0] , &y[0] , &z[0]);

    scanf("%d", &m);

    for( i = 1 ; i <= m ; i++ ){
         scanf("%d %d %d" , &x[i] , &y[i] , &z[i]);
         scanf("%d %d %d" , &M[i] , &K[i] , &C[i]);
    }

    solve(m);

    return 0;
}
