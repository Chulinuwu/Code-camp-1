#include <stdio.h>
#include <string.h>

char table[100];
int lt[100][100];

int main(){

    int a,b,cnt,r,c,i,j,m;

    scanf("%d %d %d", &a,&b,&cnt);

    lt[0][0] = b;
    lt[0][1] = cnt;

    for(i=1; i < a ; i++){
    scanf("%d %d %d", &r, &c, &cnt);
    b = b+r+c*3;
    lt[i][0] = b;
    lt[i][1] = cnt;
    }

    m=0;
    for(i =0; i < a ; i++){
        if(lt[i][0] == 1){
        for(j = 1 ; j <= lt[i][1] && m >0; m--, j++);
        continue;
        }
        else if(lt[i][0] == 2){
        lt[i][1] = (lt[i][1]-1)%3;
        table[m] = lt[i][1] + 'A';
        }
        else if(lt[i][0] == 3){
        lt[i][1] = (lt[i][1]-1)%3;
        table[m] = lt[i][1] + 'D';
        }
        else if(lt[i][0] == 4){
        lt[i][1] = (lt[i][1]-1)%3;
        table[m] = lt[i][1] + 'G';
        }
        else if(lt[i][0] == 5){
        lt[i][1] = (lt[i][1]-1)%3;
        table[m] = lt[i][1] + 'J';
        }
        else if(lt[i][0] == 6){
        lt[i][1] = (lt[i][1]-1)%3;
        table[m] = lt[i][1] + 'M';
        }
        else if(lt[i][0] == 7){
        lt[i][1] = (lt[i][1]-1)%4;
        table[m] = lt[i][1] + 'P';
        }
        else if(lt[i][0] == 8){
        lt[i][1] = (lt[i][1]-1)%3;
        table[m] = lt[i][1] + 'T';
        }
        else if(lt[i][0] == 9){
        lt[i][1] = (lt[i][1]-1)%4;
        table[m] = lt[i][1] + 'W';
        }
        m++;
    }
    if(m==0){
        printf("null");
    }
    for(i = 0; i < m ; i++){
        printf("%c", table[i]);
    }
    return 0;
}
