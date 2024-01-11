#include <stdio.h>
#include <math.h>
int main()
{
    int x , y;
    scanf("%d%d" , &x , &y);
    if(x > 100 || x < 0 || y < 0 || y > 100){
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }
} 
//C_MM15