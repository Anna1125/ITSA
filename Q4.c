#include <stdio.h>
int main()
{
    char input;
    scanf("%c" , &input);
    if(input == 'E'){
        printf("ByeBye\n");
    }
    else if(input == 'M'){
        printf("Male\n");
    }
    else{
        printf("Female\n");
    }
    return 0;
}
//C_CH02