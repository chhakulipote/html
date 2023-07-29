// C program to take a string as a input.

#include<stdio.h>
int main(){
	char str[40];
	scanf("%s",str);
	printf("your input is : %s",str);
	return 0;
}

// it only takes one word from the input
//if  we have to print a sentence then use gets.
// we have one shortcut to print the whole sentence also
//use %[^\n]s
