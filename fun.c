#include <stdio.h>
#include <cs50.h>

int sum (int n1, int n2){
int result = n1 + n2;
   return result;
}

int main(void){
 int x= sum (60,9);
 int y=  x+69;
printf("%i\n", y);
}
