#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int height , sex;
    float weight;
    while(scanf("%d %d" , &height , &sex) != EOF){
        if(sex == 1){
            weight = (height - 80) * 0.7;
        }
        else{
            weight = (height - 70) * 0.6;
        }
        printf("%.1f\n" , weight);
    }
    return 0;
}
//C_CH07