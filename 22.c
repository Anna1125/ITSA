#include <stdio.h>
#include <math.h>
int main()
{
    int x , y;
    int answer;
    scanf("%d %d" , &x , &y);
    for(int i = 1; i < x; i++){
        if(y%i == 0 && x%i == 0){
            answer = i;
        }
    }
    printf("%d\n" , answer);
} 
//C_MM17