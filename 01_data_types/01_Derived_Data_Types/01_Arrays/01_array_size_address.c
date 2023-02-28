#include <stdio.h>

int main()
{

    char arr_char[3] = {'A', 'B', 'C'};              // 3 bytes
    int arr_int[3] = {10, 20, 300};                  // 12 bytes
    float arr_float[3] = {1.0, 2.0, 3.0};            // 12 bytes
    double arr_double[3] = {11.999, 21.909, 30.980}; // 24 bytes

    printf("Size of the charecter array:- %d\n", sizeof(arr_char));
    printf("Size of the integer array:- %d\n", sizeof(arr_int));
    printf("Size of the float array:- %d\n", sizeof(arr_float));
    printf("Size of the double array:- %d\n\n", sizeof(arr_double));

    // Address of operator i.e & operator is used to fetch the base address of any element

    // In case of array the name of array is internally considered as the base address of that array so there is no need to use & opeartor to fetch the address of array

    printf("Address of charecter array :- %d\n", arr_char);
    printf("Address of integer array :- %d\n", arr_int);
    printf("Address of float array :- %d\n", arr_float);
    printf("Address of double array :- %d\n\n", arr_double);

    printf("Sizeof single element of array...\n");
    printf("Size of single element of charecter array :- %d\n", sizeof(arr_char[1]));
    printf("Size of single element of integer array :- %d\n", sizeof(arr_int[2]));
    printf("Size of single element of float array :- %d\n", sizeof(arr_float[0]));
    printf("Size of single element of double array :- %d\n\n", sizeof(arr_double[1]));

    printf("Address single element of array...\n");
    printf("Address of single element of charecter array :- %d\n", &arr_char[0]);
    printf("Address of single element of integer array :- %d\n", &arr_int[1]);
    printf("Address of single element of float array :- %d\n", &arr_float[1]);
    printf("Address of single element of double array :- %d\n\n", &arr_double[2]);

    // By using the concept of addresses the array topic gets relate with the pointers

    // If we create the array with some specified size and we initilise less number of elment than that size the all the non-inisilised elements gets automatically inisilised with default value
    // THE ABOVE RULE IS ONLY APPLICABLE IF THE ARRAY IS INISILED WITH MEMBER INITILISATION LIST
    return 0;
}
