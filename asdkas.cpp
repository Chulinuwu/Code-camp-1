#include <bits/stdc++.h>

using namespace std;

stack <int> st;
int a[1010];

int main(){

   int n;

   scanf("%d", &n);

   for(int i = 0 ; i < n ; i++){
    scanf("%d",&a[i]);
    st.push(a[i]);
   }

   while(!st.empty()){
    printf("%d\n",st.top());
    st.pop();
   }

    return 0;
}
