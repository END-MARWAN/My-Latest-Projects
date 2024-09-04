#include <stdio.h>
#include <cs50.h>
void rec(int m);
int main (void){

     rec(3);
}
void rec(int m){
     if (m==0){
          return;
     }
     printf("hello ya 3m el 7ag\n");
     rec(m-1);
}
