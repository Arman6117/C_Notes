// If our programm contains Multiple statements and if we want to excecute that multiple statments in a proper sequence theen it is considered as a SEQUENCE

#include <stdio.h>
 
int main () 
{
  int no1 = 0, no2 = 0, ans = 0;

  printf("Enter first number:- ");
  scanf("%d", &no1);

  printf("Enter second number:- ");
  scanf("%d", &no2);

  ans = no1 + no2;

  printf("The addition is:- %d\n", ans);
     
 return 0;
}

// In the above application all the steps which are used to perform a addition gets executed in the sequence