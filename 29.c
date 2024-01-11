#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d" , &x);
    for(int j = x - 1; j > 1; j--){
        int flag = 1;
        for(int i = 2; i < j; i++){
        if(j % i == 0){
            flag = 0;
        }
    }
    if(flag == 1){
        printf("%d\n" , j);
        break;
    }
} 
}
//C_MM29