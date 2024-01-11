#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    float answer;
    scanf("%d" , &x);
    if(x <= 800){
        answer = x * 0.9;
    }
    else if (x > 800 && x < 1500){
        answer = x * 0.9 * 0.9;
    }
    else if(x >= 1500){
        answer = x * 0.9 * 0.79;
    }
    printf("%.1f\n" , answer);
} 
//C_MM19