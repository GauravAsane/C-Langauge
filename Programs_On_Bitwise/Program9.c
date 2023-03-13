/*
    Write a program which accept one number from user and toggle 7th and
    10th bit of that number. Return modified number.
    Input : 137
    Output : 713
*/


// iMask    0000 0000 0000 0000 0000 0010 0100 0000

// iNo      0000 0000 0000 0000 0000 0000 1000 1001     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0010 1100 1001      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0x00000240;
   
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

    printf("Updated Number after toggle 7th and 10th bit is : %d\n",iRet);

    return 0;
}

