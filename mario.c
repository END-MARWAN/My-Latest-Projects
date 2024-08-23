#include <stdio.h>
#include <cs50.h>
int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    if(x>y){
 printf("y is less than x\n");
    }
    else if(y>x){
    printf("y is not less than x\n");
    }
    else{
 printf("x and y is Equal\n");
    }

}
