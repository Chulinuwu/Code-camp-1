#include <stdio.h>

int mx[5];
int mark[30][30][30];
int ans[30];

void play(int now[]){

    int i,j;

    for(i =0 ; i< 3 ; i++){
        if(now[i] < 0 || now[i] > mx[i]){
            return;
        }
    }
        if(mark[now[0]][now[1]][now[2]]){
            return;
        }

        mark[now[0]][now[1]][now[2]] = 1;

        if(now[0] == 0){
            ans[now[2]] = 1;
        }

        int next[3];

        for(i=0 ; i <3 ; i++){
            for(j=0 ; j <3 ; j++){
                if(i == j){
                    continue;
                }
                int other = 3-i-j;

                next[j] = now[i]+ now[j];
                next[i] = 0;
                next[other] = now[other];
                play(next);

                next[j] = mx[j];
                next[i] = now[i]- mx[j]+ now[j];
                next[other] = now[other];
                play(next);
            }
        }
}

int main(){

    int i;

    for(i = 0 ; i < 3 ; i++){
    scanf("%d", &mx[i]);
    }

    int a[3] = {0,0,mx[2]};

    play(a);

    for(i=0; i <= mx[2] ; i++){
        if(ans[i]){
            printf("%d ", i);
        }
    }
    return 0;
}


