#include <stdio.h>
#include <math.h>

int a[8000000];

int main(){

    int n,i,j,sq,cnt = 1;

    scanf("%d", &n);

    if(n==1){

        printf("2\n");
        return 0;

    }

    for(i=3 ; i< 8000000 ; i+= 2){

        a[i] = 1;
        sq = sqrt(8000000);

    }

    for(i=3 ; i<= sq ; i+= 2){
        if(a[i] != 0){
            for(j = i*i ; j < 8000000; j+= i){
                a[j] = 0;
            }
        }

    }

    for( i = 3 ; i< 8000000 ; i+= 2){
        if(a[i] != 0 ){
            cnt++;
            if(n == cnt){
                printf("%d\n", i);
                return 0;
            }
        }
    }

    return 0;
}
