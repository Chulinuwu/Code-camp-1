#include <bits/stdc++.h>

using namespace std;

stack <string> st;
char a[1010];

int main()
{
    int q,i,k,j,len;
    int x = 0;
    int sum = 0;
    int secsum[10010];
    int mark = 0;
    int ans;
    int finsum = 0;
    scanf("%d", &q);

    while(q--)
    {
        x = 0;
        scanf(" %s", a);
        len = strlen(a);

        for(i = 0 ; i < len ; i++){
            if(a[i] == '('){ // found ( will enter this condition
               // st.push(a[i]);
                x++;
                mark++;
            }
            if(mark != 0){ // found (  and not found ) yet will enter this condition
                if(a[i] == 'C'){
                    if(a[i+1] >= '2' && a[i+1] <= '9'){
                        secsum[x] += 12*(a[i+1]-'0');
                    }
                    else{
                         secsum[x] += 12;
                    }
                }
                if(a[i] == 'H'){
                    if(a[i+1] >= '2' && a[i+1] <= '9'){
                        secsum[x] += 1*(a[i+1]-'0');
                    }
                    else{
                         secsum[x] += 1;
                    }
                }
                if(a[i] == 'O'){
                    if(a[i+1] >= '2' && a[i+1] <= '9'){
                        secsum[x] += 16*(a[i+1]-'0');
                    }
                    else{
                         secsum[x] += 16;
                    }
                }
                if(a[i] == ')'){
                    mark--;
                    if(mark != 0){
                    if(a[i+1] >= '2' && a[i+1] <= '9'){
                      secsum[x] *= a[i+1]- '0';
                    }
                    }

                    if(mark == 0){
                        for(j = 0 ; j <= x ; j++){
                            finsum += secsum[j];
                        }
                        finsum *= a[i+1] - '0';
                    }
                }
            }
            if(a[i] == 'C' && mark == 0){ // normal found C
                if(a[i+1] >= '2' && a[i+1] <= '9'){
                    sum += 12*(a[i+1] - '0');
                }
                else if(a[i+1] != '('){
                    sum += 12;
                }
            }
            if(a[i] == 'H' && mark == 0){ // normal found H
                if(a[i+1] >= '2' && a[i+1] <= '9'){
                    sum += 1*(a[i+1] - '0');
                }
                else if(a[i+1] != '('){
                    sum += 1;
                }
            }
            if(a[i] == 'O' && mark == 0){ // normal found O
                if(a[i+1] >= '2' && a[i+1] <= '9'){
                    sum += 16*(a[i+1] - '0');
                }
                else if(a[i+1] != '('){
                    sum += 16;
                }
            }
        }

        ans = sum+finsum;


        printf("%d\n", ans);
        sum = 0;
        finsum = 0;

    }

    return 0;
}

/*
2
COOH
(C(H2O)2)3
*/
