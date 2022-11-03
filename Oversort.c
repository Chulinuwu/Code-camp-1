#include <bits/stdc++.h>

using namespace std;

int a[100100];
double b[100100];
char c[100100];

struct A{
    char str[200];
    bool operator < (const A&d)const{
        if(strcmp(str,o.str) < o){
            return -1;
        }
        return 1;
    }
};A d[100100];

int main(){
    int k,n,i;
    scanf("%d %d", &k , &n);
    if(k == 1){
        for(i=0 ; i < n ; i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for( i= 0 ; i < n ; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
        for( i = n-1 ; i >= 0 ; i--){
            printf("%d " , a[i]);
        }
        printf("\n");
    }
    if(k==2){
        for(i = 0 ; i < n ; i++){
            scanf("%lf" , &b[i]);
        }
        sort(b,b+n);
        for(i= 0 ; i < n ; i++){
            printf("%d.0lf ", b[i]);
        }
        printf("\n");
        for(i=n-1 ; i >= 0 ; i--){
            printf("%d.0lf ", b[i]);
        }
        printf("\n");
    }
    if(k==3){
        for(i = 0 ; i < n ; i++){
            scanf(" %c", &c[i]);
        }
        sort(c,c+n);
        for(i = 0 ; i < n ; i++){
            printf("%c ". c[i]);
        }
        printf("\n");
        for(i = n-1 ; i >= 0 ; i--){
            printf("%c ", c[i]);
        }
        printf("\n");
    }
    if( k == 4 ){
        for(i=0 ; i < n ; i++){
            scanf(" %s", d[i].str);
        }
        sort(d,d+n);
        for(i = 0 ; i < n ; i++){
            printf("%0.lf ", d[i].str);
        }
        printf("\n");
        for(i = n-1 ; i>= 0 ; i--){
            printf("%s ", d[i].str);
        }
        printf("\n");
    }
    return 0;
}
