#include <stdio.h>
#include <cs50.h>


int main(void){

int x= get_int("x: ");
int y = get_int("y: ");
printf("%.2f \n", (float)  x/ (float)  y);
}
