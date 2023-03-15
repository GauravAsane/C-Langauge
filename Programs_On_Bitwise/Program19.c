/*
    Write a program which accept one number , two positions from user and
    check whether bit at first or bit at second position is ON or OFF.

    Input : 10 2 7
    Output : TRUE
*/

// iMask1    0000 0000 0000 0000 0000 0000 0000 0100
//          &
// iNo       0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result1   0000 0000 0000 0000 0000 0000 0000 0000      


// iMask2     0000 0000 0000 0000 0000 0000 0100 0000
//          &
// iNo1       0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result2    0000 0000 0000 0000 0000 0000 0000 0000 


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No1 ,int pos1 , int pos2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT Result1 = 0;
    UINT Result2 = 0;

    iMask1 = iMask1 << pos1-1;
    iMask2 = iMask2 << pos2-1;

    Result1 = iMask1 & No1;
    Result2 = iMask2 & No1;


    if(Result1 == iMask1 || Result2 == iMask2)
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
    int iPos1 = 0;
    int iPos2 = 0;
    bool bRet = false;
    
    printf("Enter the Number : \n");
    scanf("%d",&Value);

    printf("Enter the First Position : \n");
    scanf("%d",&iPos1);

    printf("Enter the Second Position : \n");
    scanf("%d",&iPos2);

    bRet = CheckBit(Value, iPos1 , iPos2);

    if(bRet == true)
    {
        printf("%d or %d position Bit of %d number is ON \n",iPos1 , iPos2,Value);
    }
    else
    {
        printf("%d or %d position Bit of %d number is OFF \n",iPos1, iPos2, Value);
    }

    return 0;
}