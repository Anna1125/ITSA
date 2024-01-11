#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int x;
    int days = 0 , h = 0, min = 0;
    scanf("%d" , &x);
    for(int i = 0; i < 1000000; i++){
        if(x >= 86400){
            x -= 86400;
            days++;
        }
        else if(x >= 3600){
            x -= 3600;
            h++;
        }
        else if(x >= 60){
            x -= 60;
            min++;
        }
        else{
            printf("%d days\n%d hours\n%d minutes\n%d seconds\n" , days , h , min , x);
            break;
        }
    }
    
    
} 
//C_MM14