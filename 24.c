#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int x;
    scanf("%llu" , &x);
    if(x == 1 || x == 0){
        printf("1\n");
    }
    else{
        for(int i = x - 1; i > 1; i--){
        x *= i;
    }
    printf("%llu\n" , x);
    }
    
} 
//C_MM21