/*
    Write a program which accept one number from user and off 7th and 10th
    bit of that number. Return modified number.
    Input : 577
    Output : 1
*/

// iMask    1111 1111 1111 1111 1111 1101 1011 1111 

// iNo      0000 0000 0000 0000 0000 0010 0100 0001     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 0001       


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
    UINT iMask = 0xFFFFFDBF;
   
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