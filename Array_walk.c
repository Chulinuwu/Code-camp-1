#include <stdio.h>

int a[30][30];

int main(){
 int r,c,i,j;

 scanf("%d %d", &r, &c);

 for(i=0; i<r ; i++){
    for(j=0; j<c ; j++){
        scanf("%d",&a[i][j]);
    }
 }

 for(i=0; i<r ; i++){
    for(j=0; j<c ; j++){
        printf("%d ",a[i][j]);
    }
 }
 printf("\n");
 for(i= r-1 ; i >=0 ; i--){
    for(j = c-1 ; j >= 0 ; j--){
        printf("%d ",a[i][j]);
    }
 }
 printf("\n");
 for(i = 0; i<c ; i++){
    for(j =0; j<r ; j++){
        printf("%d ",a[j][i]);
    }
 }
 printf("\n");
 for(i = c-1; i>=0 ; i--){
    for(j = r-1; j >=0 ; j--){
        printf("%d ",a[j][i]);
    }
 }
 return 0;
}

