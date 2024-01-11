#include <stdio.h>
#include <math.h>
int main()
{
    int x , y , temp;
    int answer = 0;
    scanf("%d%d" , &x , &y);
    if(y < x){
        temp = x;
        x = y;
        y = temp;
    }
    for(int i = x; i <= y; i++){
        answer += i;
    }
    printf("%d\n" , answer);
} 
//C_MM27