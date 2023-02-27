// In case of selection we have to select the specefic path of the programm using if-else

#include <stdio.h>
 
int main () 
{
   int no = 0;

   printf("Enter number:- ");
   scanf("%d", &no);

   if ((no % 2) == 0)
   {
    printf("It is a even number\n");
   }
   else 
   {
    printf("It is a odd number\n");
   }
    
 return 0;
}
