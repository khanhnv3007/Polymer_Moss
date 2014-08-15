#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define size 100
int main()
{
    char a[size][size];
    int  b, c, d ,e, i, j, k;
    for (i = 0; i<=3; i++){
        for (j = 0; j<=3; j++)
        {
            scanf ("%c", &a[i][j]);
            }
        }    
     for (i = 0; i<=3; i++){
        for (j = 0; j<=3; j++)
        {
            if (a[i][j]=='h')
            {
                             if (a[i-1][j]=='i'||a[i+1][j]=='i'||a[i][j-1]=='i'||a[i[j+1]=='i'){
                             printf ("%d %d", i, j);}
                             }
     }
     return 0;
    }

