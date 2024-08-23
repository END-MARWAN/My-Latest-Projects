#include <stdio.h>
#include <cs50.h>

int main (void){
   int length = get_int ("how many score ");
    int scores [length];
    int result= 0;
    for ( int i=0; i < length ; i++){

   scores [i] = get_int ("number: ");
   result += scores [i];
    }


     printf("Average %f\n", result/ (float) length );
}
