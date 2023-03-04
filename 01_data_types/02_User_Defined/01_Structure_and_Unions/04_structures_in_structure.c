#include <stdio.h>

// We cannot create a object of a same structure inside a that structure
// We can create a object of a  structure inside another structure. This type of structure is called as NESTED STRUCTURE

// struct Demo
// {
//     int no;
//     float f;
//     // struct Demo obj;  // Not allowed
// };

struct Hello
{
    int x;
    int i;
    // struct Demo dobj;  // allowed

    // We can also create a nested inside a structure by declaring the inner structure inside a outer structure

    struct Demo
    {
        int no;
        float f;
        // struct Demo obj;  // Not allowed
    }dobj;
};
/*

        +-------+100
Hello    [  10  ]       Hello::x
         +------+104
         [  45  ]       Hello::i
        +------+112
Demo     [  30  ]       Hello::dobj::no
        +------+116
         [  3.6 ]       Hello::dobj::f
        +------+120

*/

int main()
{

    struct Hello hobj = {10, 45, 30, 3.6};

    // If the structure is nested then we have to use object name sequencially to acces the members of the structure

    // We can multiple objects of inner structure 

    return 0;
}
