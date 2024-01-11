#include <stdio.h>
#include <math.h>
int main()
{
    int x , y;
    float answer = 0;
    scanf("%d %d" , &x , &y);
    while(x != 0)
    {
        if(x > 120){
        answer += y * 1.66;
        x--;
    }
        if(x >= 61 && x <= 120){
        answer += y * 1.33;
        x--;
    }
        if(x <= 60){
        answer += y;
        x--;
    }
    }
    printf("%.1f\n" , answer);
} 
//C_MM24