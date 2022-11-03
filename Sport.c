#include <stdio.h>

int a[110], k;

void play(int w, int l , int state){
    int i;
    if(w == k || l == k){
        for(i = 0; i < state ; i++){
            if(a[i]){
                printf("W ");
            }
            else{
                printf("L ");
            }
        }
            printf("\n");
            return;
    }
    a[state] = 1;
    play(w+1 , l , state +1);
    a[state] = 0;
    play(w, l+1 ,state+1);
}

int main(){

    int w,l;
    scanf("%d %d %d", &k, &w,&l);
    play(w,l,0);

    return 0;
}
