#include <stdio.h>
typedef char* string;

int main(void){
string s = "hi!"; // sting = char*
printf("%p\n",s);
printf("%p\n",&s[0]);
printf("%p\n",&s[1]);
printf("%p\n",&s[2]);
printf("%p\n",&s[3]);
}
