#include <stdio.h>
#include <math.h>
int main()
{
   int x;
   scanf("%d" , &x);
   int flag = 1;
   for(int i = 2; i < x; i++){
    if(x % i == 0){
        flag = 0;
        printf("NO\n");
        break;
    }
   }
   if(flag == 1){
    printf("YES\n");
   }
} 
//C_MM30