#include <stdio.h>

/*****************************STRUCTURE AND UNIONS*******************8*******************/
/*
     1] Structure and Union are considered as USER DEFINED DATA TYPES in C and C++

     2] The concept of structure is internally considered as the collection of any data type
        (Primitve, Derived, User Defined) depends on requirements of programmer

     3] Structure and Unions can store HETROGINOIUS data in it. Hetroginous means data elements of different data types

     4] The concept and union are almost same except there MEMORY ALLOCATION TECHNIQUE

*/
/******************************STRUCTURE AND UNIONS**************************************/

/* Keyword */ struct Demo // Name of the structure
{
   int no;
   float f;
   double d;
   int j;
}; // End of structure declaration



/******************************DIAGRAMATIC REPRESENTATION**************************************/
/*

     +-----+100
Demo |  no |  <- 4 bytes
     +-----+104
       f   |  <- 4 bytes
     +-----+112
       d   |  <- 8 bytes
     +-----+116
       j   |  <- 4 bytes
     +-----+120
   

*/
/******************************DIAGRAMATIC REPRESENTATION**************************************/






// 1] The above syntax is considered as a declaration means there is NO MEMORY ALLOCATION for it

// 2] We can't initialise member of structure there is no memory allocation
/*
    struct Demo {
      int n = 12;  // Not allowed
      int x;  // Allowed
    }
*/

// 3] All the members of structure should be declared with unique names

// 4] After declaring the structure we can create a object of a structure

// 5] When we create a object of a strucutre the memory gets allocated at that point

int main()
{
   struct Demo obj1; // Object of a structure
   

   // We can initialise the members of a structure by using the "."(dot)opreator
   // "." is called as DIRECT MEMBER ACCESSING OPERATOR

   obj1.no = 3;
   obj1.f  = 44.44;
   obj1.d  = 35.4566;
   obj1.j  = 56;

   // We can also initialise a structure with a membr initialisation list
   // The order of initialisation is imp

   struct Demo obj2 = {4,32.3,47.434,13};
   return 0;
}
