#include <stdio.h>
#include <cs50.h>
int main(void){
    int n = get_int("n: ");

    //if n is even
    if(      n% 2 ==0    )
    {
 printf("even\n");
    }

    else{
 printf("odd\n");
    }

}
