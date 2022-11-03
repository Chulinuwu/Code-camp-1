#include <stdio.h>

int dp[100100];

int main(){
int n,i,r,s,q;

scanf("%d" , &n);

for(i = 1 ; i<= n ; i++){

 scanf("%d",&r);

 dp[i] = dp[i-1]+r;
 }

 scanf("%d" , &q);

 while(q--){

 scanf("%d %d", &r ,&s);
 printf("%d", dp[s]-dp[r-1]);
 }

 return 0;
}
