#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[10];
    fgets(a , 10 , stdin);
    a[0] = a[0] - 48;
    a[1] = a[1] - 48;
    a[2] = a[2] - 48;
    if((a[0]*a[0]*a[0] + a[1]*a[1]*a[1] + a[2]*a[2]*a[2]) == (100 * a[0] + 10 * a[1] + a[2])){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
} 
//C_MM32