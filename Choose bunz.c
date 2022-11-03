#include <stdio.h>
#include <math.h>


int dp[2][10010];

int main(){
    int n,r,k,i,j;

    scanf("%d %d %d", &n , &r ,&k);

    dp[0][0] = dp[1][0] = dp[1][1] = 1%k;

    for(i = 2 ; i <= n ; i++){
        dp[i%2][0] = dp[i%2][i] = 1%k;
        for(j=1 ; j < i ; j++){
            dp[i%2][j] = dp[(i-1)%2][j] + dp[(i-1)%2][j-1];

            dp[i%2][j] %= k;
        }
        }

        printf("%d\n", dp[n%2][r]%k);

        return 0;
}
