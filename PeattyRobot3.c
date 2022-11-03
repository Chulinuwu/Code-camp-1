#include <stdio.h>
#include <string.h>
#include <math.h>

char a[1000];

int main(){
int i,k,now;

int n = 0;
int s = 0;
int w = 0;
int e = 0;

scanf(" %s",a);

for(i = 0 ; i < strlen(a) ; i++){
switch(a[i]){
case 'N' :
n++;
break;
case 'S' :
s++;
break;
case 'E' :
e++;
break;
case 'W' :
w++;
break;
}
}

scanf("%d" , &k);

now = abs((n-s)+(e-w));

if(n >= s){
    if(s>=k){
        now+=k;
        k = 0;
    }
    else{
        now+=s;
        k-=s;
    }
}
else{
    if(n>=k){
        now+=k;
        k = 0;
    }
    else{
        now+= n;
        k-= n;
    }
}
if(e>=w){
    if(w>=k){
        now += k;
        k = 0;
    }
    else{
        now += w;
        k -= w;
    }
}
else{
    if(e >= k){
        now+=k;
        k = 0;
    }
    else{
        now+= e;
        k-= e;
    }
}

int ans = now-k;
printf("%d", ans*2);
return 0;
}
