/*
write a program which checks whether 7th, 8th , 9th bit is ON or OFF
*/

// iMask    0000 0000 0000 0000 0000 0001 1100 0000 
      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0x000001C0;
   
   // UINT Result = 0;
    //Result = No & iMask;

    if(iMask == No)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("7th, 8th , 9th Bit of '%d' is ON\n",iValue);
    }
    else
    {
        printf("7th, 8th , 9th Bit of '%d' is OFF\n",iValue);
    }

    return 0;
}