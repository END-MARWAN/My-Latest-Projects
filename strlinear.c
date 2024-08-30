#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
      string names [] = {"marwan","habiba","mohamed","gamal","mazen", "malak", "ali"};
    // linear search
    for (int i = 0 ; i< 7; i++ ){
      if ( strcmp (names [i], "habiba")==0 ){
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
