#include <stdio.h>

int main(){

int i,j,n;

scanf("%d", &n);

for(i = 0; i< n-1 ; i++){
    for(j = 0; j <= i; j++){
        printf("*");
    }
    for(j = 0; j < 2*n-2*i-3; j++){
        printf("-");
    }
    for(j = 0; j <= i ; j++){
        printf("*");
    }
    printf("\n");
}
for(i = 0; i <2*n-1; i++){
    printf("*");
}
printf("\n");
for(i = 0; i< n-1 ; i++){
    for(j = 0; j < n-i-1; j++){
        printf("*");
    }
    for(j = 0; j < 2*i+1; j++){
        printf("-");
    }
    for(j = 0; j < n-i-1 ; j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
