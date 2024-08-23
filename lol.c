#include <stdio.h>
#include <cs50.h>
int main(void){
    long num1 = get_long("num1: ");
    long num2 = get_long("num2: ");
    printf( "%li\n",  num1 + num2 );
}
