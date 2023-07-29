#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
 int i1; ///declaration
 printf("i1=%d\n",i1);
 
 i1=5; ///assigenment
 printf("i1=%d\n",i1);
 
 i1=-3; ///good bye 5
 printf("i1=%d/n",i1);
 
 i1=3.5; ///casting 3.5 is converted to an integer 3
 printf("i1=%d\n\n",i1);
 
 // int i1=2;///error we already declared i1 
 
 double d1=3.5;
 printf("d1=%f\n",d1);
 
 d1=0; /// casting 0 is converted to a double 0.0
 printf("d1=%If\n",d1);
 
 float f1=3.7;
 printf("f1=%f\n\n",f1);
 
 char c="A";///not "A",this is a string
 printf("%c\n",c);
 
 c=65;///casting,go see the ASCII table 
 printf("%c\n",c);
 
 char code ="A";///casting
 printf("%c\n",code);
 
 _Bool b=0;
 printf("b=%d\n",b);
 
 b=1;
 printf("b=%d\n",b);
 
 b=2;
 printf("b=%d\n",b);
 
 b=1;
 printf("b=%d/n",b);
 
 ///include <stdbool.h> to use "true" or "false"
 b=false;
 printf("using keywords b=%d\n",b);
 b=true;
 printf("using keywords b=%d\n\n",b);
 
 char name[]="chhaku"; ///group of characters
 printf("%s\n",name);
 
 ///how to know how much variable can hold
 
 return 0;
}
