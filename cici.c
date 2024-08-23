#include <stdio.h>
#include <cs50.h>
 float discount(float price, int x);

int main(void){

float regular = get_float("regular price:");
int percent = get_int("the discount: ");
float sale = discount(regular, percent );

printf ("sale price =%.2f\n",sale);
}

  float discount(float price, int x){

       return price * (100 -x)/100 ;
    }
