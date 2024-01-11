#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int input;
    scanf("%d" , &input);
    printf("%.1f\n" , (round(input * 1.6 * 10)/10));
    return 0;
}
//C_MM06