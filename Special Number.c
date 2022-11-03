#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char a[20];

int main(){
    int i,j;

    for(i = 0 ; i < 5 ; i++){
        scanf(" %s", a);
        int len = strlen(a);
        int sum = 0;
        for(j = 0 ; j < len ; j++){
             sum += pow(a[j]-48, j+1);
        }
        int num = atol(a);
        if(sum == num){
            printf("Y");
        }
            else{
            printf("N");
        }
        }
    return 0;
}
