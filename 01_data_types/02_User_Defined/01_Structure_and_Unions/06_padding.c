#include <stdio.h>

// If our structure contains the charecter as a member then the compiler will allocate 4 byte from those 4 byts only one byte will be used to store the charecter other 3 bytes will be wasted which is called padding

// Padding is such which is allocated by the compiler but not used to store the data

// The memory allocation techniques are purly based on the compiler
#pragma pack (1)
struct Demo
{
    int no;
    int i;
    char ch1; // Memory wastage of 3 bytes
    char ch2; // Memory wastage of 2 bytes this charecter will be stored side by side of last one if they are declared like this
    float f;
    char ch3 // Now again there will be wastage of 3 bytes
};

// In the above example there is memory wastage 
// To avoid the memory wastage we use the concept of #pragma pack()

int main () 
{
   
 return 0;
}

/*
            +------------------------------------+
            |     Struct Demo                    |
            +------------------------------------+
            |       int no                      |
            +------------------------------------+
            |       int i                       |
            +------------------------------------+
            |      char ch1                     |
            |      char ch2                     |
            | [padding - 2 bytes]               | 
            +-----------------------------------+
            |       float f                     |
            +-----------------------------------+
            | char ch3   [padding - 3 bytes]    |
            +-----------------------------------+
           

*/