#include <stdio.h>
#include <string.h>

char a[2000],b[2000];

int main(){
    int len,n,i,j;
    int cnt;
    scanf("%d%d%s", &len , &n , a);
    for(i = 0; i < n-1 ; i++){
        scanf(" %s",b);
        cnt = 0;
        for(j = 0; j < len ; j++){ // check dif of a / b
            if(b[j] != a[j]){
                cnt++;
            }
        }
             if(cnt > 2){
                break;
                }
            strcpy(a,b);
    }
    printf("%s\n",a);
    return 0;
}
