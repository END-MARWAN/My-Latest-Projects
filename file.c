#include <stdio.h>
#include <cs50.h>

int main (void){
 FILE *myfile = fopen("phonebook.csv","a");
   char* name = get_string("name: ");
   char* phone = get_string ("phone : ");
   fprintf (myfile,"%s, %s\n",name, phone);
   fclose (myfile);
}
 // mood                  delete       create
 // r=> read                no           no
 // w=> write               yes          yes
 // a=> append              no           yes

