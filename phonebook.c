#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct  {
      string name;
       string number;
}pb;

int main (void){

   pb people[2];
   people[0].name = "marwan";
   people [0].number = "5494083";

 people[1].name = "habiba";
  people [1].number = "4865610";

      for (int i = 0; i < 2; i++){
            if(strcmp(people[i].name ,"habiba")==0){
                  printf("Found %s ^_^ \n",people[i].number );
                  return 0;
            }
      }
      printf ("Not Found :( \n");
      return 1;
}
