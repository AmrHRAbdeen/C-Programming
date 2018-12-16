/**********************************************************************************************************
                                        *****Circlar Left Shift*****                                     
                       -This code is about circulat Left shift of an 8 bit variable (CHAR) 
                       -Cirular Left Shift is done by 3 Steps:
                                1-Shifting the 8 bit var to Left by the Amount of shit
                                2-Shifting the 8 bit var to right by: 
                                   [ ( NumberOfBits in the variable (i.e: 8 in this case)*sizeof(x) )-AmountOfShift]
                                3- ORing step 1 with step 2 i.e: (result of step 1) | (result of step 3)


************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char u8;

#define CHAR_BIT 8

/**************************Defintion of Circular Left Shift Function*********************************
    -Takes the variable , amount of left shift and returns the new shifted and circulated variable
    -INPUTS:   Var        : Variable to be shifted
               shiftAmount: shift amount
/********************************************************************************************/

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
