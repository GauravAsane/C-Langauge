/*
    Write a program which accept one number and position from user and off
    that bit. Return modified number.
    Input : 10 2
    Output : 8
*/

// iMask    0000 0000 0000 0000 0000 0000 0000 0010
//          &
// iNo      0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 0010 
//          ^
// iNo      0000 0000 0000 0000 0000 0000 0000 1010 
//-----------------------------------------------------     
//Result    0000 0000 0000 0000 0000 0000 0000 1000

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

int OffBit(UINT No , UINT Pos)
{
    UINT Mask = 0x00000001;
    UINT Result = 0;

    Mask = Mask << (Pos-1);

    Result = Mask & No;

    Result = No ^ Result;

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

    iRet = OffBit(Value , iPos);

    printf("Updated Number after off the %d number bit is : %d\n",iPos,iRet);


    return 0;
}