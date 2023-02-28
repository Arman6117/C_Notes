#include <stdio.h>

void Display () {          // Fucntion
    printf("Hello World! from Display Function");
}


int main () {  // MAIN Entry point function

   printf("Inside main \n");         // All the lines inside the {} are considered as a BLOCK OF CODE
   Display();   // Function Calling

 return 0;
}


// In the above application there are 2 blocks of code on line 3 and on line 8 

// We defined 2 functions MAIN() & DISPLAY()

// MAIN is considered as ENTRY POINT FUNCTION from where the excution of our programe starts. Due which it is considered as a ENTRY POINT FUNCTION

// DISPLAY is user defined function which gets called inside MAIN function





/*****************************************ABOUT THE MAIN FUNCTION******************************************/
/*
 1] MAIN is considered as the ENTRY POINT FUNCTION 

 2] Entry point function is such a function from where the EXCUTION of program starts

 3] In all programming language like (C C++ JAVA) MAIN is considered as a entry point function

 4] The main gets automatically called by OPERATING SYSTEM when we excute our program

 5] Every C C++ JAVA progarm should cotains atleast one function and that is MAIN
*/
/*****************************************ABOUT THE MAIN FUNCTION******************************************/