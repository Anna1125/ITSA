#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a;
    scanf("%lf" , &a);
    printf("%.1lf\n" , round(a*a*10)/10);
    return 0;
}
//C_MM05