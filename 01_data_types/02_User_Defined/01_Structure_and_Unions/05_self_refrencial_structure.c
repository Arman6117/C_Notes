#include <stdio.h>

// We can create a pointre which is points to the structure of same type which is called as SELF REFRENICIAL STRUCTURE

// They are called as self refrencial structure because The object of a structure will hold the address of another object of a same structure

struct Demo
{
    int no;
    struct Demo *ptr; // Self refrencial structure
};

int main()
{
    // We can create connected nodes by using concepts of self refrencial structure

    struct Demo *head;

    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no = 11;
    obj2.no = 91;
    obj3.no = 51;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = NULL;

    head = &obj1;

    return 0;
}
/*

     +-----+           +-----+           +-----+
obj1 |  11 |    ptr -> | obj2|    ptr -> | obj3|
     +-----+           +-----+           +-----+
         |                                     ^
         |                                     |
         v                                     |
     +-----+                                   |
obj2 |  91 |    ptr ----------------------------+
     +-----+
         |
         |
         v
     +-----+
obj3 |  51 |    ptr -> NULL
     +-----+

   head
     +
     |
     v
   +-----+
   | obj1|
   +-----+
     |
     v
   +-----+
   | obj2|
   +-----+
     |
     v
   +-----+
   | obj3|
   +-----+
     |
     v
    NULL


*/
