#include <bits/stdc++.h>

using namespace std;

int a[1010];
char b;
queue <int> qu;

int main(){

    int Nc, Ns;
    int c,s,n;

    scanf("%d %d", &Nc , &Ns);

    while(Ns--){
        scanf("%d %d" , &c , &s);
        a[s] = c;
    }

    while(1){
        scanf(" %c", &b);
        if(b == 'E'){
        scanf("%d" , &n);
        qu.push(n);
        }
        if(b == 'D'){
            printf("%d\n", qu.front());
            qu.pop();
        }
        if(b == 'X'){
            printf("0\n");
            return 0;
        }
    }



}
