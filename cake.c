#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main (){
 const int x=5;
 double y= 3.0;
 
 y=PI;
 printf("x=%d\n",x);
 printf("y=%lf\n\n",y);
 
 ///addrease of variable
 printf("the addrease of y in memory is: %p",&y); ///the use '&'to get the addrease of the variable
 
 return 0 ;
  
}
