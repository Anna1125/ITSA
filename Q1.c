#include <stdio.h>
#include <stdlib.h>
int main()
{
    float u , l , h;
    float answer;
    scanf("%f %f %f" , &u ,&l , &h);
    answer = (u + l) * h / 2;
    printf("Trapezoid area:%.1f\n" , answer);
    return 0;
}
//C_MM01