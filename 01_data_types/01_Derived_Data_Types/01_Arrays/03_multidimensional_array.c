#include <stdio.h>

//  Multidimensional is considered as ARRAY OF ARRAY

int main () 
{
 // Example of 2 dimensional array

 int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  // 4 x 3 = 12 elements
 
/* 
     arr is two dimensional array 
     which contains 3 one dimensional array in it
     each one dimensional array contains 4 elements
     each element is of type integer
*/

// We can also inisilise elements of multidimensional array by using member by member inisilisation

 arr[0][0] = 1;
 arr[0][1] = 2; 
 arr[0][2] = 3;
 arr[0][3] = 4;

 arr[1][0] = 5;
 arr[1][1] = 6; 
 arr[1][2] = 7;
 arr[1][3] = 8;
 
 arr[2][0] = 9;
 arr[2][1] = 10; 
 arr[2][2] = 11;
 arr[2][3] = 12;
 return 0;
}


/**************************************MEMORY LAYOUT**********************************************/
/*             0     1      2      3
           0 [  1  |  2   |   3  |   4  ]
       arr 1 [  5  |  6   |   7  |  8   ]
           2 [  9  |  10  |  11  |  12  ]  
       
*/
/**************************************MEMORY LAYOUT**********************************************/