/*
    Write a program which accept one number from user and range of
    positions from user. Toggle all bits from that range.
    Input : 897 9 13
    Output: 7297
    Toggle all bits from position 9 to 13 of input number ie 897.
*/

// iMask1     1111 1111 1111 1111 1111 1111 0000 0000
//           &
// iMask2     0000 0000 0000 0000 0001 1111 0000 0000
//---------------------------------------------------------
// iMask      0000 0000 0000 0000 0001 1111 0000 0000
//          ^
// iNo        0000 0000 0000 0000 0000 0011 1000 0001     
//-----------------------------------------------------
// Result     0000 0000 0000 0000 0001 1100 1000 0001      





#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

int ToggleBitRange(UINT No1 ,int Start , int End)
{
    UINT iMask1 = 0xFFFFFFFF;
    UINT iMask2 = 0xFFFFFFFF;
    UINT iMask = 0x00000000;

    UINT Result= 0;

    iMask1 = iMask1 << Start-1;
    iMask2 = iMask2 >> 32 - End;

    iMask = iMask1 & iMask2;

    Result = iMask ^ No1;

    return Result; 

}


int main()
{
    UINT Value = 0;
    int istart = 0;
    int iEnd = 0;
    int iRet = 0;
    
    printf("Enter the Number : \n");
    scanf("%d",&Value);

    printf("Enter the Start Position : \n");
    scanf("%d",&istart);

    printf("Enter the End Position : \n");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(Value, istart , iEnd);

    printf("Updated Number after toggle the Bit from range %d to %d is :  %d \n",istart,iEnd,iRet);


    return 0;
}