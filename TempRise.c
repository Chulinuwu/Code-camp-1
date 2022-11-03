#include <stdio.h>

int a[100][100];
int di[] = { 1,-1,0,0};
int dj[] = { 0, 0, 1, -1};
int n, mx=-6;

void play(int i, int j){
    if(a[i][j] > mx){
        mx = a[i][j];
    }
    int k,ii,jj;
    for(k=0 ; k <4 ; k++){
        ii = i + di[k];
        jj = j + dj[k];
        if(ii < 1 || jj < 1 || ii > n || jj > n ){
            continue;
        }
        if(a[ii][jj] == 100){
            continue;
        }
        if(a[ii][jj] > a[i][j]){
            play(ii,jj);
        }
    }
}

int main(){
int sj,si,i,j;

scanf("%d %d %d", &n, &sj ,&si);

for(i=1; i <=n ; i++){
    for(j=1 ; j<=n ; j++){
        scanf("%d", &a[i][j]);
    }
}
    play(si,sj);
    printf("%d\n",mx);
    return 0;
}
