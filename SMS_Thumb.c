#include <stdio.h>
#include <string.h>
#include <math.h>

char table[50][50][50];

int main(){

int n,i,j,k,l,S,a,b;
int nowx;
int nowy;
int cnt1,cnt;
int erase = 8;
int x =0;
int y =0;
int asc = 65;

scanf("%d",&n);

for(i = 1 ; i <= 3 ; i++){ //about every num
    for(j =1 ; j <= 3 ; j++){
        if(j == 1 && i == 1){
         table[1][1][1] = erase;
        }
        else if((i == 3 && j==1) || (i == 3 && j == 3)){
           for(k = 1 ; k <= 4 ; k++){
            table[i][j][k] = asc;
            asc++;
            }
        }
        else{
        for(k = 1 ; k <= 3 ; k++){
            table[i][j][k] = asc;
            asc++;
            }
       }
    }
}

for(i = 1;i <= n; i++){
    if(i==1){
    scanf("%d %d",&S,&cnt);
   // for(j = 1 ; j <=3; j++){
    switch(S){
    case 1:
        x+= 1;
        y+= 1;
        for(j=1 ; j <=cnt ; j++){
        printf("%c",table[y][x][1]);
        }
    break;
    case 2:
        x+= 2;
        y+= 1;

    break;
    case 3:
        x+= 3;
        y+= 1;

    break;
    case 4:
        x+= 1;
        y+= 2;

    break;
    case 5:
        x+= 2;
        y+= 2;

    break;
    case 6:
        x+= 3;
        y+= 2;

    break;
    case 7:
        x+= 1;
        y+= 3;

    break;
    case 8:
        x+= 2;
        y+= 3;

    break;
    case 9:
        x+= 3;
        y+= 3;

    break;
    }
    if(S != 7 && S != 9){
    if(cnt%3 == 0){
            cnt = 3;
            printf("%c",table[y][x][cnt]);
        }
        else {
            printf("%c",table[y][x][cnt%3]);
        }
    }
    else if(S == 7 || S == 9){
      if(cnt%4 == 0){
            cnt = 4;
            printf("%c",table[y][x][cnt]);
        }
        else {
            printf("%c",table[y][x][cnt%4]);
        }
    }
    nowx = x;
    nowy = y;
}

    if(i > 1){
        scanf("%d %d %d", &a,&b,&cnt1);
      //  for(j = 1 ; j <= n ; j++){
        if(nowx == 1 && nowy == 1){
        for(j = 1 ; j <= cnt1 ; j++){
            printf("%c",erase);
        }
        }
        else if((nowx == 3 && nowy == 3) || (nowx== 1 && nowy == 3)){
        if(cnt1%4 == 0){
            cnt1 = 4;
            printf("%c",table[nowy+b][nowx+a][cnt1]);
        }
        else {
            printf("%c",table[nowy+b][nowx+a][cnt1%4]);
        }
    }
    else{
      if(cnt1%3 == 0){
            cnt1 = 3;
            printf("%c",table[nowy+b][nowx+a][cnt1]);
        }
        else {
            printf("%c",table[nowy+b][nowx+a][cnt1%3]);
        }
    }
     //   }
    nowx += a;
    nowy += b;
    }

}

return 0;

}
