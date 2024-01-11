#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int i = 0, j = 0;
    scanf("%d" , &x);
    while(x >= 10){
        x -= 10;
        i++;
    }
    while(x >= 5){
        x -= 5;
        j++;
    }
    printf("NT10=%d\nNT5=%d\nNT1=%d\n" , i , j , x);
} 
//C_MM11