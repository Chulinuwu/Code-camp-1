#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char a[3000][3000];
char b[3000][3000];
char a1[200000];
char b1[200000];
int i,j,k;
int m;
long long m1;
long long m2;
int x = 0;
int y = 0;

void solveA(int j){

    int right = j+1;
    int mid = j;
    int left = j-1;
            if( x == m1){
              //  printf("%s mumi\n",a1);
                return;
            }
            if((j+1)%2 == 0 && (j+1)%4 != 0)
            {
                if(a[2][mid] == ' ')
                {
                    if(a[3][left] == ' ')
                    {
                        a1[x] = '1';
                        x++;
                        solveA(j+4);
                    }
                    else
                    {
                        a1[x] = '4';
                        x++;
                        solveA(j+4);
                    }
                }
                if(a[2][mid] == '_')
                {
                    if(a[3][mid] == '_' && a[3][left] == ' '  && a[4][mid] == '_')
                    {

                            if(a[4][left] == '|')
                            {
                                a1[x] = '2';
                                x++;
                                solveA(j+4);
                            }
                            else
                            {
                                a1[x] = '3';
                                x++;
                                solveA(j+4);
                            }

                    }
                    else if(a[3][mid] == '_' && a[3][left] == '|' && a[3][right] == ' ')
                    {
                        if(a[4][left] == '|')
                        {
                            a1[x] = '6';
                            x++;
                            solveA(j+4);
                        }
                        else if(a[4][left] == ' ')
                        {
                            a1[x] = '5';
                            x++;
                            solveA(j+4);
                        }
                    }
                    else if(a[3][left] == ' ' && a[4][left] == ' ' && a[2][mid] == '_')
                    {
                        a1[x] = '7';
                        x++;
                        solveA(j+4);
                    }
                    else if(a[3][right] == '|' && a[4][right] == '|' && a[4][mid] == '_' && a[3][left] == '|')
                    {
                        if(a[3][mid] == ' ')
                        {
                            a1[x] = '0';
                            x++;
                            solveA(j+4);
                        }
                        else if(a[4][left] == '|' && a[3][left] == '|')
                        {
                            a1[x] = '8';
                            x++;
                            solveA(j+4);
                        }
                        else
                        {
                            a1[x] = '9';
                            x++;
                            solveA(j+4);
                        }
                    }
                }
            }
            else{
                printf("Error");
                return;
            }
       }

void solveB(int k){

    int right = k+1;
    int mid = k;
    int left = k-1;
            if( y == m2){
              //  printf("%s ok",b1);
                return;
            }
            if((k+1)%2 == 0 && (k+1)%4 != 0)
            {
                if(b[1][mid] == ' ')
                {
                    if(b[2][left] == ' ')
                    {
                        b1[y] = '1';
                        y++;
                        solveB(k+4);
                    }
                    else
                    {
                        b1[y] = '4';
                        y++;
                        solveB(k+4);
                    }
                }
                if(b[1][mid] == '_')
                {
                    if(b[2][mid] == '_' && b[2][left] == ' '  && b[3][mid] == '_')
                    {

                            if(b[3][left] == '|')
                            {
                                b1[y] = '2';
                                y++;
                                solveB(k+4);
                            }
                            else
                            {
                                b1[y] = '3';
                                y++;
                                solveB(k+4);
                            }

                    }
                    else if(b[2][mid] == '_' && b[2][left] == '|' && b[2][right] == ' ')
                    {
                        if(b[3][left] == '|')
                        {
                            b1[y] = '6';
                            y++;
                            solveB(k+4);
                        }
                        else if(b[3][left] == ' ')
                        {
                            b1[y] = '5';
                            y++;
                            solveB(k+4);
                        }
                    }
                    else if(b[2][left] == ' ' && b[3][left] == ' ' && b[1][mid] == '_')
                    {
                        b1[y] = '7';
                        y++;
                        solveB(k+4);
                    }
                    else if(b[2][right] == '|' && b[3][right] == '|' && b[3][mid] == '_' && b[2][left] == '|')
                    {
                        if(b[2][mid] == ' ')
                        {
                            b1[y] = '0';
                            y++;
                            solveB(k+4);
                        }
                        else if(b[3][left] == '|' && b[2][left] == '_')
                        {
                            b1[y] = '8';
                            y++;
                            solveB(k+4);
                        }
                        else
                        {
                            b1[y] = '9';
                            y++;
                            solveB(k+4);
                        }
                    }
                }
            }
            else{
                printf("Error");
                return;
            }
}

int main()
{

    scanf("%lld %lld", &m1, &m2);

    for(i = 1 ; i <= 4 ; i++)
    {
        gets(a[i]);
    }

    for(i = 1 ; i <= 3 ; i++){
       gets(b[i]);
   }

  // printf("%c", b[3][2]);

    solveA(1);
    solveB(1);

    long long ans1 = atol(a1);
    long long ans2 = atol(b1);

    printf("%lld",ans1+ans2);

    return 0;

}


//4 2
// _
//  | |_|   | |_|
//  |   |   |   |
// _
//|_|   |
// _|   |


//4 3
//         _   _
//  | |_|  _|  _|
//  |   | |_   _|
// _       _
//  |   | |_
//  |   | |_|
