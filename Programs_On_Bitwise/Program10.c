/*
    Write a program which accept one number from user and on its first 4
    bits. Return modified number.
    Input : 73
    Output : 79
*/


// iMask    0000 0000 0000 0000 0000 0000 0000 1111

// iNo      0000 0000 0000 0000 0000 0000 0100 1001     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0010 0100 1111      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT OnBit(UINT No)
{
    UINT iMask = 0x0000000F;
   
   UINT Result = 0;

    Result = No | iMask;

    return Result;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Updated Number after on First 4 bits is : %d\n",iRet);

    return 0;
}

