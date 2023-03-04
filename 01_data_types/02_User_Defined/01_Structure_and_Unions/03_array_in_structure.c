#include <stdio.h>

struct Demo
{
    int no;
    float f;
    int arr[3]; // We can also create a array as a member of a structure
};

int main()
{

    struct Demo obj1;

    obj1.no = 34;
    obj1.f = 45.5;

    obj1.arr[0] = 3;
    obj1.arr[1] = 36;
    obj1.arr[2] = 5;

    // We can also create array of structure objects

    struct Demo arr_obj[3];

    // arr_obj is a one dimensional array which contains 3 elements of type struct Demo
    // Where demo is structure which contains one integer one float and one integer array which contains 3 elements

    arr_obj[0].no = 545;
    arr_obj[1].f = 54.5;
    arr_obj[2].arr[0] = 3;

    return 0;
}

/******************************DIAGRAMATIC REPRESENTATION**************************************/
/*

     +-------+100
Demo [  34  ]       <- 4 bytes
     +------+104
     [ 45.5 ]       <- 4 bytes
     +------+112
arr  [  3   ]        <- 4 bytes
     +------+116
     [  36  ]        <- 4 bytes
     +-----+120
     [  5  ]       <- 4 bytes
     +-----+124


*/
/******************************DIAGRAMATIC REPRESENTATION**************************************/