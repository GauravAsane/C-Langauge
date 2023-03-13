/*
    Write a program which accept one number from user and toggle 7th bit of
    that number. Return modified number.
    Input : 137
    Output : 201
*/


// iMask    0000 0000 0000 0000 0000 0000 0100 0000

// iNo      0000 0000 0000 0000 0000 0000 1000 1001     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 1100 1111      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0x00000040;
   
   UINT Result = 0;

    Result = No ^ iMask;

    return Result;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number after toggle 7th bit is : %d\n",iRet);

    return 0;
}

