#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char a[30][30],b[200],mark[30][30];
int len;
int r,c,d[200][2],ch;
int di[]= {0,0,1,-1};
int dj[]= {1,-1,0,0};

void play(int i, int j , int state){

d[state][0] = i;
d[state][1] = j;

int k,ii,jj;

if(state == len-1){
    for(k = 0 ; k < len ; k++){
        printf("%d %d\n", d[k][0], d[k][1]);
    }
    ch = 0;
    return;
}

for(k = 0; k < 4 ; k++){
    ii = i + di[k];
    jj = j + dj[k];

    if(ii < 1 || jj < 1 || ii > r || jj > c){
        continue;
    }
    if(mark[ii][jj]){
        continue;
    }
    if(a[ii][jj] != b[state+1]){
        continue;
    }
    mark[ii][jj] = 1;
    play(ii,jj,state+1);
    mark[ii][jj] = 0;
}
}

int main(){
    int i,j,q;

    scanf("%d %d", &r , &c);

    for(i = 1 ; i <= r ; i++){
        for(j = 1 ; j <= c ; j++){
            scanf(" %c", &a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf(" %s", b);
        len = strlen(b);
        for(i = 0 ; i <len ; i++){
            b[i] = tolower(b[i]);
        }
        ch = 1;
        for(i = 1 ; i <=r ; i++){
            for(j = 1 ; j <= c ; j++){
                if(a[i][j] == b[0]){
                mark[i][j] = 1;
                play(i,j,0);
                mark[i][j] = 0; // backtracking
                }
            }
        }
        if(ch){
            printf("No Matching Word\n");
        }
    }
    return 0;
}
