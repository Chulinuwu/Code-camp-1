#include <bits/stdc++.h>

using namespace std;

stack <char> st;

int main(){
    int n;
    char a;

    scanf("%d", &n);

    while(n--){
        scanf(" %c", &a);
        if(!st.empty() && st.top() == a){
            st.pop();
        }
        else{
            st.push(a);
        }
    }

    printf("%d\n",st,size());

    if(st.empty()){
        printf("empty\n");
    }
    else{
        while(!st.empty()){
            printf("%c",st.top());
            st.pop();
        }
    }

    return 0;

}
