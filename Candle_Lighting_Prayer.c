#include <bits/stdc++.h>

using namespace std;

const int di[] = {-1 , -1 , 0 , 1 ,1 ,1 , 0 , -1};
const int dj[] = { 0 , 1 ,1 ,1 , 0 , -1 , -1 , -1};

struct GRAPH{
    int i,j;
};

char a[2010][2010];

queue <GRAPH> qu;

int main(){
        int r,c;
        int i,j;
        scanf("%d %d", &r , &c);

        for(i = 1 ; i <= r ; i++){
            scanf(" %s", a[i]+1);
        }
        int ans = 0;
        for( i = 1 ; i <= r ; i++){
            for(i j = 1 ; j <= c ; j ++){
            if(a[i][j] == '1'){
            ans++;
            a[i][j] = '0';
            qu.push({i,j});
            while(!qu.empty()){
                int i = qu.front().i;
                int j = qu.front().j;
                qu.pop();
                for(int k = 0 ; k < 8 ; k++){
                int ii = i + di[k];
                int jj = j + dj[k];
                if(ii < 1 || jj < 1 || ii > r || jj > c){
                 continue;
                }
                if(a[ii][jj] != '1'){
                continue;
                }
                a[ii][jj] = '0';
                qu.push({ii,jj});
                }
            }
            }
            }
        }
        printf("%d\n", ans);

        return 0;
}
