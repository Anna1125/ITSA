#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a;
    scanf("%f" , &a);
    printf("%.1f\n" , round((a*9/5+32)*10)/10);
    return 0;
}
//C_MM10