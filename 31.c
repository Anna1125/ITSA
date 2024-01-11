#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d" , &x);
    int answer = 0;
    for(int i = 1; i <= x; i++){
        if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0){
            answer += i;
        }
    }
    printf("%d\n" , answer);
} 
//C_MM31