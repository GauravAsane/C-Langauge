/*
    Write a program which accept one number and position from user and
    check whether bit at that position is on or off. If bit is one return TURE
    otherwise return FALSE.

    Input : 10 2
    Output : TRUE
*/

// iMask    0000 0000 0000 0000 0000 0000 0000 0010
//          &
// iNo      0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 0010       


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No , UINT Pos)
{
    UINT Mask = 0x00000001;
    UINT Result = 0;

    Mask = Mask << (Pos-1);

    Result = Mask & No;

    if(Result == Mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    UINT Value = 0;
    UINT iPos = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&Value);

    printf("Enter the Position : \n");
    scanf("%d",&iPos);

    bRet = CheckBit(Value , iPos);

    if(bRet == true)
    {
        printf("Bit at Position %d is ON.\n",iPos);
    }
    else
    {
        printf("Bit at Position %d is OFF.\n",iPos);
    }


    return 0;
}