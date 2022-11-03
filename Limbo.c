#include <stdio.h>

char a[1000][100];

int r,c,cnt;
void play(int i , int j);

int main(){
    scanf("%d %d", &c, &r);

    int i,j,mx = -1;

    for(i =0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf(" %c", &a[i][j]);
        }
    }

    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            if(a[i][j] == '*'){
                cnt = 0;
                play(i,j);
                if(cnt > mx){
                    mx = cnt;
                }
            }
        }
    }
    printf("%d\n",mx);
    return 0;
}

void play(int i , int j){
if( i < 0 || i >= r || j < 0 || j >= c ){
    return;
}
if( a[i][j] == '.' ){
    return;
}
    a[i][j]= '.';
    cnt++;
    play(i-1,j);
    play(i+1,j);
    play(i,j-1);
    play(i,j+1);
   }
