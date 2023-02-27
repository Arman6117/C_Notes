#include <stdio.h>

int main()
{

    int A = 10;

    const int B = 11;
  
   A++; // Allowed
// B++;  Not-Allowed

    return 0;
}

/***********************************DATA TYPE QUALIFIERS****************************************/
/*
  1]  Data type qualifiers are considered as such keywords which applies the new quality to exsiting data type

  2]  There are 2 types of data type qualifires in C and C++
       
       1] CONST :=>  If we use const before variable declartion then we cant change the value of that variable it would be constant throughout the program
                    
            ** The concept of const is applicable to all types of data types **
       
       2] Volatile :=> DEPRECATED 
*/
/***********************************DATA TYPE QUALIFIERS****************************************/