#include <stdio.h>

char table[100][100];

int main(){

int r,cl,i,j,k;

scanf("%d %d", &r, &cl);

for(i = 0 ; i < r ; i++){
    for(j = 0 ; j < cl ; j++){
            scanf(" %c",&table[i][j]);
}
}

for(j = 0 ; j < cl ; j++){
    scanf("%d", &k);

for(i =0; i<r && table[i][j] == '.' ; i++);

for(i = i-1; i>= 0 && k >0; k--,i--)
    table[i][j] = '#';

}
for(i = 0 ; i < r ; i++){
    for(j = 0 ; j < cl ; j++){
            printf("%c",table[i][j]);
}
printf("\n");
}
return 0;
}
