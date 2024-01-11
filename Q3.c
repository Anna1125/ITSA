#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d" , &n);
    if(n == 1){
        printf("Person\n");
    }
    else if(n == 2){
        printf("Fairy\n");
    }
    else{
        printf("Dwarf\n");
    }
    return 0;
}
//C_CH01