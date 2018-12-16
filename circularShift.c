#include <stdio.h>
#include <stdlib.h>
typedef unsigned char u8;
#define CHAR_BIT 8

int cirShiftToLeft(int x ,int shiftAmount){
    u8 y,z,r;
    y=x<<shiftAmount;
    z=(x>>(CHAR_BIT*sizeof(x)-shiftAmount));
    r=y|z;
    return r;
}

int main()
{
        u8 x=5;
        printf("Circular shift Result is: %d \n",cirShiftToLeft(x,3));
    return 0;
}
