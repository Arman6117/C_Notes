#include <stdio.h>

// Array is internaly consider as a Data Structure (Linear)
// Array is defined as The colllection homogenious elements stored in the sequencial and the indexed format

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    // arr is a one dimensional array which contains 5 elements each element is a type of integer


    // To access the contents of the array we have to specify the NAME and the  INDEX of that element



    printf("%d\n", arr[0]); // 10
    printf("%d\n", arr[1]); // 20


    // 1] There are 2 ways in which we can inisilise the array

    // i] Member inisilisation list (arr is inilised by ths way)

    //  ii] Member by member inisilation


    int arr2[3];

    arr2[0] = 11;
    arr2[1] = 21;
    arr2[2] = 31;



    //  2] If we inisilise array with member inisilisation list then the size of the array is optional

    int arr3[] = {10, 20, 30}; // Compiler will count all the members and allocate the memory

    // int arr[];  Not allowed


  
    // 3] The size of array must be positive we can't use variable as a size of the array
    /*
       int no = 4;

       int arr[no]; Not allowed
   */



    // We can create array of all the primtive data type (except void)


    /********************************ARRAY OF ALL DATA TYPES**************************************/

    int arr_char[3] = {'A', 'B', 'C'}; // 3 bytes
    int arr_int[3] = {10, 20, 300};  // 12 bytes
    int arr_float[3] = {1.0, 2.0, 3.0}; // 12 bytes
    int arr_double[3] = {11.990, 21.990, 30.990}; // 24 bytes
    
   /********************************ARRAY OF ALL DATA TYPES**************************************/

    return 0;
}



/**************************************MEMORY LAYOUT**********************************************/
/*


                 0       1     2     3      4   <-- Index of array
         arr  [  10  |  20  |  30  |  40  | 50  ]
 Base    -->100    104    108    112    116   120
 address
            // Inside [] are the contents of the array
           // arr is the name of the array


*/
/**************************************MEMORY LAYOUT**********************************************/