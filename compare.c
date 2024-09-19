#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){
     string s = get_string ("s: ");
     string k = get_string  ("k: ");
     if(strcmp(s, k)==0){
          printf("they are the same\n");

     }
      else{
               printf("they aren't the same\n");
          }
}
