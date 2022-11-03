#include <bits/stdc++.h>

using namespace std;

int ans[150];
int ans1[150];

int main(){
    int n;
    int sml,med,large;
    int x,mark,y;
    x = 0;
    y = 0;
    sml = 6;
    med = 9;
    large = 20;
    mark = 0;

    scanf("%d", &n);

    for(int i = 6 ; i <= n ; i+= 3){
            ans[x] = i;
            x++;
            mark ++;
    }

    for(int i = 20 ; i <= n ; i+= 3){
            if(i == 23){
                continue;
            }
            ans[x] = i;
            x++;
            mark ++;
    }

    for(int i = 40 ; i <= n ; i+= 3){
            if(i == 43){
                continue;
            }
            ans[x] = i;
            x++;
            mark ++;
    }

    for(int i = 60 ; i <= n ; i+= 3){
            if(i == 63){
                continue;
            }
            ans[x] = i;
            x++;
            mark ++;
    }

    for(int i = 80 ; i <= n ; i+= 3){
            if(i == 83){
                continue;
            }
            ans[x] = i;
            x++;
            mark ++;
    }

    sort(ans,ans+x);

    for(int i = 0 ; i < x ; i++){
        if(ans[i] != ans[i+1]){
            ans1[y] = ans[i];
            y++;
        }
        else{
            continue;
        }
    }

    sort(ans1,ans1+y);

    if(mark != 0){
    for(int i = 0 ; i < y ; i++){
       printf("%d\n",ans1[i]);
    }
    }
    else{
        printf("no");
    }
    return 0;
}
