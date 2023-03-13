/*
    Write a program which accept one number from user and off 7th bit of that
    number if it is on. Return modified number.
    Input : 79
    Output : 15
*/

// iMask    1111 1111 1111 1111 1111 1111 1011 1111 

// iNo      0000 0000 0000 0000 0000 0000 0100 1111     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 1111       


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
    UINT iMask = 0xFFFFFFBF;
   
   UINT Result = 0;

    Result = No & iMask;

    return Result;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated Number is : %d\n",iRet);

    return 0;
}