#include <stdio.h>
#include <cs50.h>

int main (void){
   int count = -1;

   do{
 count  = get_int("count:");

   }while(count <1);



for (int i = 0; i<count; i++){

    for(int m =0; m<count;m++ ){
        printf("#");
    }
    printf ("\n");
}


}
