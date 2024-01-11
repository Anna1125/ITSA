#include <stdio.h>
#include <math.h>
int main()
{
    int season;
    while(scanf("%d" , &season) != EOF){
        if(season >= 3 && season <= 5){
            printf("Spring\n");
        }
        else if(season >= 6 && season <= 8){
            printf("Summer\n");
        }
        else if(season >= 9 && season <= 11){
            printf("Autumn\n");
        }
        else{
            printf("Winter\n");
        }
    }
    return 0;
}
// 基礎題目6