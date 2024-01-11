#include <stdio.h>
#include <math.h>
int main()
{
    int a , b , c , d , e;
    int answer;
    scanf("%d%d%d%d%d" , &a , &b , &c , &d , &e);
    answer = (a + b*2 + c*2 + d*2) - (e*2);
    if(answer >= 45){
        printf("A\n");
    }
    else if(answer >= 35 && answer <= 44){
        printf("B\n");
    }
    else if(answer >= 25 && answer <= 34){
        printf("C\n");
    }
    else{
        printf("D\n");
    }
    return 0;
}
//C_CH08