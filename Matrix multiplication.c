#include <stdio.h>

int matrixA[200][200];
int matrixB[200][200];
int matrixANS[100][100];

int main(){

int n1,n2,m1,m2,i,j,k;

scanf("%d %d %d %d", &n1,&m1,&n2,&m2);

if(n2 == m1){
for(i =0 ; i<n1 ; i++){
    for(j = 0 ; j<m1 ; j++){
        scanf("%d",&matrixA[i][j]);
    }
}

for(i =0 ; i<n2 ; i++){
    for(j = 0 ; j<m2 ; j++){
        scanf("%d",&matrixB[i][j]);
    }
}

    for(i = 0 ; i< n1 ; i ++){
        for(k = 0 ; k < m2 ; k++){
            for(j = 0 ; j < m1 ; ++j){
                matrixANS[i][k] += matrixA[i][j] * matrixB[j][k];
        }
        }
}
    for(i = 0 ; i< n1 ; i ++){
        for(j = 0 ; j < m2 ; j++){
            printf("%d ",matrixANS[i][j]);
            if(j == m2-1){
                printf("\n");
            }
       }
}
}

else{
    printf("Can't Multiply.");
}
return 0;
}
