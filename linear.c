#include <stdio.h>
#include <cs50.h>

int main(void){
      int numbers [] = {4,6,8,2,7,5,0};
    // linear search
    for (int i = 0 ; i< 7; i++ ){
      if (numbers[i] == -1 ){
            printf("found in %i steps\n", i+1 );
            return 0 ;
            // 0 means true
      }
    }
    // eny num except 0 is false
    // + no need to write (else) just write (return) out of the "for" loop

    printf( "not found !\n");
    return 1;
}
