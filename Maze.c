#include <bits/stdc++.h>
using namespace std;

const int di[] = { -1 , 0 , 1 , 0};
const int dj[] = {0, 1 , 0 ,-1};

struct GRAPH{
    int i , j;
};

int a[160][160];

queue <GRAPH> qu;

int disst[160][160], disen[160][160];

int main(){
    int r,c;
    int sti, sij;
    int eni,enj;
    int i , j ,k ;
    scanf("%d %d", &r ,&c);

    scanf("%d %d", &sti, &stj);

    scanf("%d %d", &eni , &enj);

    for(i = 1 ; i <= r ; i++){
        for(j = 1 ; j <= c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    memset(disst , -1 , sizeof(disst));

    disst[sti][stj] = 1;

    qu.push({sti,stj});

    while(qu.empty() == 0){
        int i = qu.front().i;
        int j = qu.front().j;

        qu.pop();
        for(k = 0 ; k < 4 ; k++){
            int ii = i + di[k];
            int jj = j + dj[k];
        }
    }
}
