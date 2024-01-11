#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d" , &x);
    for(int i = 1; i < x; i++){
        if(x % i == 0){
            printf("%d " , i);
        }
    }
    printf("%d\n" , x);
} 
//C_MM34