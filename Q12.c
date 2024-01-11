#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int input;
    int answer = 1;
    scanf("%d" , &input);
    if(input > 31){
        printf("Value of more than 31\n");
    }
    else{
        for(int i = 0; i < input; i++){
        answer = answer * 2;
    } 
    printf("%d\n" , answer);
    }
    return 0;
}
//C_MM09