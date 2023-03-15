/*
    Write a program which accept one number and position from user and
    toggle that bit. Return modified number.

    Input : 10 3
    Output : 14

*/

// iMask    0000 0000 0000 0000 0000 0000 0000 0100
//          ^
// No       0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 1110       


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

int CheckBit(UINT No , UINT Pos)
{
    UINT Mask = 0x00000001;
    UINT Result = 0;

    Mask = Mask << (Pos-1);

    Result = Mask ^ No;

    return Result;
}


int main()
{
    UINT Value = 0;
    UINT iPos = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&Value);

    printf("Enter the Position : \n");
    scanf("%d",&iPos);

    iRet = CheckBit(Value , iPos);

    printf("Updated Number after %d position bit get On : %d\n",iPos,iRet);


    return 0;
}