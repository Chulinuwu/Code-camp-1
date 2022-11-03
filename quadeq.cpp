#include <bits/stdc++.h>

using namespace std;

int ans[100];

int main(){

    int a , b , c;

    scanf("%d %d %d", &a , &b , &c);

    int mx = max(max(a,b),c);
    int mark = 0;
    for(int i = 1 ; i <= mx ; i++){
        for(int j = 1 ; j <= mx ; j++){
         //    for(int k = 1 ; k <= mx ; k++){
              //    for(int l = 1 ; l <= mx ; l++){
            if(i*j == a && k*l == c && (i*l) + (j*k) == b){
                if(i < j){
                    ans[1] = i;
                    ans[2] = k;
                    ans[3] = j;
                    ans[4] = l;
                }
                else{
                    ans[1] = j;
                    ans[2] = l;
                    ans[3] = i;
                    ans[4] = k;
                }
                mark = 1;
            }
      //  }
 //   }
  }
 }
    if(mark == 1){
    printf("%d %d %d %d", ans[1] , ans[2] , ans[3] , ans[4]);
    }
    else{
        printf("No Solution");
    }

    return 0;
}