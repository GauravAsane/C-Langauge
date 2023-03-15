/*
    Write a program which accept one number from user and count number of
    ON (1) bits in it without using % and / operator
*/

// iMask    0000 0000 0000 0000 0000 0000 0000 0010
//          &
// iNo      0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 0010      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

int CountOne(UINT No)
{
    UINT iMask = 0x00000001;
    UINT Result = 0;
    int iCnt = 0;
    int Count = 0;
   


    for(iCnt = 1 ; iCnt <= 32 ; iCnt++)     
    {
        iMask = 0x00000001;
        iMask = iMask << iCnt-1; 

        Result = iMask & No;               

        if(Result == iMask)
        {
           
            Count++;
        }

    }    
    return Count;
}


int main()
{
    UINT Value = 0;
    UINT iPos = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&Value);



    iRet = CountOne(Value);

    printf("Number of Bits are ON is : %d\n",iRet);



    return 0;
}