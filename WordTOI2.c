#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char a[100];
char b[100][100];
int di[]= {-1,-1,-1,0,0,1,1,1};
int dj[]= {-1,0,1,-1,1,-1,0,1};

int main(){

int i,j,k,l,r,c,q,m,ii,jj;
int len;
scanf("%d %d",&r,&c);

for(i = 0 ; i <r ; i++){
for(j = 0 ; j <c ; j++){
    scanf(" %c",&b[i][j]);
    b[i][j] = toupper(b[i][j]);
}
}

scanf("%d", &q);
while(q--){
    scanf(" %s",a);
    len= strlen(a);
    for(i = 0; i < len; i++){
        a[i] = toupper(a[i]);
    }
    for(i = 0 ; i < r ; i++){
        for(j =0 ; j < c ; j++){
            if(b[i][j] == a[0]){
                for(k=0; k <8 ;k++){
                    ii=i;
                    jj=j;
                    for(l=1;l< len; l++){
                        ii += di[k];
                        jj += dj[k];
                        if(ii < 0 || jj < 0 || ii >= r || jj >= c){
                            break;
                        }
                        if(b[ii][jj] != a[l]){
                            break;
                        }
                        if(l == strlen(a)-1){
                            printf("%d %d\n", i,j);
                            k=8;
                            i=r;
                            j=c;
                        }
                    }
                }
            }
        }
    }
}

return 0;
}
