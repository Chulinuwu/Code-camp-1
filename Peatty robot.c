#include <stdio.h>

char a[1000];

int main(){
int i;
int x = 0;
int y =0;

scanf(" %s",a);

for(i = 0 ; i < strlen(a) ; i++){
switch(a[i]){
case 'N' :
y++;
break;
case 'S' :
y--;
break;
case 'E' :
x++;
break;
case 'W' :
x--;
break;
case 'Z' :
x= 0;
y= 0;
break;
}
}

printf("%d %d", x ,y);

return 0;
}
