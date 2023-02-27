/***************************************FUNCTIONS IN C C++ AND JAVA************************************/
/*
  1] The concept of functions is exactly same in C C++ And JAVA

  2] In C and C++ functions are considered as Derived Data Type

  3] In case of insdustrial programming functions are considered as the most imp b'coz we have to write our logic inside functions
*/
/***************************************FUNCTIONS IN C C++ AND JAVA************************************/

#include <stdio.h>

int addition(int A, int B) {
    int result = A + B;
    return result;
}
int main()
{
    int no1 = 11;
    int no2 = 10;
    int ans = 0;

    ans = addition(no1,no2);

    printf("Addition is:- %d", ans);


    return 0;
}

// The above application contains 2 functions MAIN and ADDITION 

// In the main function we create  3 local variables

// From the main function we call the addition function which accepts 2 parameters

// The addition will return the addition of 2 integears and that addition gets displayed at the main function

/*****************************************FORMAT SPECIFIERS************************************************/
/*
     %d :=> Decimal (int)
     %f :=> Float (float & double)
     %c :=> Charecter (char)
     %s :=> String (string)
*/
/*****************************************FORMAT SPECIFIERS************************************************/

