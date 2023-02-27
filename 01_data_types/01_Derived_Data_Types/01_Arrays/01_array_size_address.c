#include <stdio.h>

int main()
{
   

    char arr_char[3] = {'A', 'B', 'C'};            // 3 bytes
    int arr_int[3] = {10, 20, 300};               // 12 bytes
    float arr_float[3] = {1.0, 2.0, 3.0};           // 12 bytes
    double arr_double[3] = {11.999, 21.909, 30.980}; // 24 bytes

    printf("Size of the charecter array:- %d\n", sizeof(arr_char));         
    printf("Size of the integer array:- %d\n", sizeof(arr_int));
    printf("Size of the float array:- %d\n", sizeof(arr_float));
    printf("Size of the double array:- %d\n", sizeof(arr_double));
    
  
    return 0;
}
