#include <stdio.h>

int main(){
int i,j,n,q;
scanf("%d",&q);
while(q--){
    scanf("%d",&n);
for(i = 1; i <= n ; i++){
    if(i == 1){
        for(j = 1; j <= n ; j++){
            printf("*");
        }
            printf("-");
        for(j = 1; j <= n ; j++){
            printf("*");
        }
        printf("-");
        for(j = 1; j <= n ; j++){
            printf("*");
        }
        printf("-");
        for(j = 1; j <= n ; j++){
            if(j == 1 || j == n){
            printf("*");
        }
        else{
            printf("-");
        }
        }
        }
        if(i >1 && i < (n+1)/2){
            for(j = 1; j <= n ; j++){
                if(j == 1 || j ==n){
                    printf("*");
        }
        else{
            printf("-");
        }
        }
        printf("-");
        for(j = 1; j <= n ; j++){
            if(j == 1 || j ==n){
                printf("*");
        }
        else{
            printf("-");
        }
        }
        printf("-");
        for(j = 1; j <= n ; j++){
            if(j == 1){
                printf("*");
        }
        else{
        printf("-");
        }
        }
        printf("-");
        for(j = 1; j <= n ; j++){
        if(j == 1 || j == n || j == i){
        printf("*");
        }
        else{
        printf("-");
        }
        }
        }
        if(i == (n+1)/2){
        for(j = 1 ; j <= n ; j++){
            printf("*");
        }
        printf("-");
        for(j = 1 ; j <= n ; j++){
            if(j == 1 || j == n){
            printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("-");
        for(j = 1 ; j <= n ; j++){
                printf("*");
        }
        printf("-");
        for(j =1 ; j<= n ;j++){
            if(j ==1 || j== n || j == (n+1)/2){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        }
        if(i > (n+1)/2 && i < n){
            for(j = 1 ; j <= n ; j++){
                if(j == 1){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            printf("-");
            for(j = 1 ; j <= n ; j++){
                if(j == 1 || j == n){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            printf("-");
            for(j = 1 ; j <= n ; j++){
                if(j == n){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            printf("-");
            for(j = 1 ; j <= n ; j++){
                if(j == 1 || j == n || j == i){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
        }
        if(i == n){
            for(j = 1 ; j<= n ; j++){
                if(j == 1){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            printf("-");
            for(j = 1 ; j<= n ; j++){
                    printf("*");
            }
            printf("-");
            for(j = 1 ; j<= n ; j++){
                    printf("*");
            }
            printf("-");
            for(j = 1 ; j<= n ; j++){
                    if(j == 1 || j == n){
                    printf("*");
                    }
                    else{
                        printf("-");
                    }
            }
        }
        printf("\n");
        }
}
return 0;
}
