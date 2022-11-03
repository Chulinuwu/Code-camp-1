#include <stdio.h>

int main(){

    int n;

    scanf("%d" , &n);

    if(n > 80){
        printf("4");
    }
    else if(n > 70){
        printf("3");
    }
    else if(n > 50){
        printf("2");
    }
    else{
        printf("0");
    }

    return 0;
}
