#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int answer = 0;
    scanf("%d" , &x);
    for(int i = 1; i <= x; i++){
        if(i % 3 == 0){
            answer += i;
        }
    }
    printf("%d\n" , answer);
} 
//C_MM25