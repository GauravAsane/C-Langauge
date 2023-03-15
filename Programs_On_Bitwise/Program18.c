/*
    Write a program which accept one number from user and check whether
    9th or 12th bit is on or off.
    Input : 257
    Output : TRUE
*/

// iMask1     0000 0000 0000 0000 0000 0001 0000 0000
//          &
// iNo1       0000 0000 0000 0000 0000 0001 0000 0001     
//-----------------------------------------------------
// Result1    0000 0000 0000 0000 0000 0001 0000 0000  


// iMask2     0000 0000 0000 0000 0000 1000 0000 0000
//          &
// iNo1       0000 0000 0000 0000 0000 0001 0000 0001     
//-----------------------------------------------------
// Result2    0000 0000 0000 0000 0000 0001 0000 0000    


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No1)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT Result1 = 0;
    UINT Result2 = 0;

    iMask1 = iMask1 << 9-1;
    iMask2 = iMask2 << 12-1;

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
    bool bRet = false;
    
    printf("Enter the First Number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("9th or 12th Bit of %d number is ON \n",Value);
    }
    else
    {
        printf("9th or 12th Bit of %d number is OFF \n",Value);
    }

    return 0;
}