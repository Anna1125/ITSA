#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d" , &x);
    for(int i = 1; i <= (x-35); i++){
        if(i % 35 == 0){
            printf("%d " , i);
        }
    }
    for(int j = (x-35); j <= x; j++){
        if(j % 35 == 0){
            printf("%d\n" , j); 
        }
        
    }
} 
//C_MM28