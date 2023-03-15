/*
    Write a program which accept one number from user and toggle contents
    of first and last nibble of the number. Return modified number. (Nibble is a
    group of four bits)
*/

// iMask1   1111 1111 1111 1111 1111 1111 1111 0000
//          ^
// iMask2   0000 1111 1111 1111 1111 1111 1111 1111 
//------------------------------------------------------
// iMask    1111 0000 0000 0000 0000 0000 0000 1111
//          ^
// No       0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result   1111 0000 0000 0000 0000 0000 0000 0101      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

int ToggleBit(UINT No )
{
    UINT iMask1 = 0xFFFFFFFF;
    UINT iMask2 = 0xFFFFFFFF;
    UINT iMask = 0x00000000;
    UINT Result = 0;

    iMask1 = iMask1 << 4;

    iMask2 = iMask2 >> 4;

    iMask = iMask1 ^ iMask2;

    Result = iMask ^ No;


    return Result;
}


int main()
{
    UINT Value = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&Value);


    iRet = ToggleBit(Value);

    printf("Updated Number after Toggle the First and Last Nibble is  : %d\n",iRet);


    return 0;
}