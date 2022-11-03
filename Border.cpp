#include <bits/stdc++.h>

using namespace std;

long long a[300][300];
vector<int> b;

int main(){
    long long n,k,i,j,sum = 0;

    scanf("%lld %lld", &n , &k);

    for( i = 0 ; i <= 2*n ; i++){
        for(j = 0 ; j <= n ; j++){
            if(i%2 == 0 && j == n){
                continue;
            }
            scanf("%lld",&a[i][j]);
        }
    }

    for(i =0 ; i < 2*n ; i+=2){
        for( j = 0 ; j < n ; j++){
            b.push_back(3*a[i][j] - 3*a[i+2][j] + 5*a[i+1][j] - 5*a[i+1][j+1]);
        }
    }

    sort(b.begin(),b.end());

    for(i= 0 ; i < k ; i++){
        sum += b[i];
    }
    printf("%lld\n", sum);

    return 0;
}
