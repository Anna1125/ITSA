#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a , b , c , temp;
    scanf("%d %d %d" , &a , &b , &c);
    for(int i = 0; i < 3; i++){
        if(b > a){
        temp = b;
        b = a;
        a = temp;
    }
    if(c > b){
        temp = c;
        c = b;
        b = temp;
    }
    if(c > a){
        temp = c;
        c = a;
        a = temp;
    }
    }
    
    printf("%d>%d>%d\n" , a , b , c);
    return 0;
}
//C_CH05