#include <stdio.h>

int main (void){
     int n = 50;
     int* p = &n;
     printf("%p\n", p); // for hexadecimal
      printf("%i\n", *p); // for value 
}
