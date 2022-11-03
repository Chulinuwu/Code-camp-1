#include <stdio.h>
#include <string.h>

char a[200];

char rotate(char tid){
if(tid == 'N'){
    return 'E';
}
if(tid == 'E'){
    return 'S';
}
if(tid == 'S'){
    return 'W';
}
if(tid == 'W'){
    return 'N';
}
}

int main(){

    char tid = 'N';

    scanf(" %s", a);

    for(int i = 0;  i < strlen(a) ; i++){
        switch(a[i]){
    case 'N' :
        while(tid != 'N'){
            tid = rotate(tid);
            printf("R");
        }
        printf("F");
        break;
    case 'S' :
        while(tid != 'S'){
            tid = rotate(tid);
            printf("R");
        }
        printf("F");
        break;
    case 'W' :
        while(tid != 'W'){
            tid = rotate(tid);
            printf("R");
        }
        printf("F");
        break;
    case 'E' :
        while(tid != 'E'){
            tid = rotate(tid);
            printf("R");
        }
        printf("F");
        break;
    case 'Z' :
        tid = 'N';
        printf("Z");
        break;
        }

    }
    return 0;
}

