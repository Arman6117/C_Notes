#include <stdio.h>
 
 struct Demo 
{
   int no;
   float f;
   int j;
   int *p; // We can also create a pointer as a member of a structure
};

int main () 
{
   // We can create a pointer which can hold the address of the object
   
   struct Demo obj1 = {10,3.5,23};

   struct Demo *ptr = &obj1;

   // Now we can initialise the members of a structure by using "->" (arrow) operator

   ptr ->f = 4.66;
   ptr ->j = 43;  // In-direct member initialisation

   /*********************************************************************************/
     
     int i = 34;

     obj1.p = &i;


 return 0;
}
