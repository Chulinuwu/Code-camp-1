#include <bits/stdc++.h>

using namespace std;


int main(){

    int a,b,c;

    //%d = int

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int sum;
    sum = a+b+c;

    if(sum >= 80){
        printf("A");
    }
    else if(sum >= 75){
        printf("B+");
    }
    else if(sum >= 70){
        printf("B");
    }
    else if(sum >= 65){
        printf("C+");
    }
    else if(sum >= 60){
        printf("C");
    }
    else if(sum >= 55){
        printf("D+");
    }
    else if(sum >= 50){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}
