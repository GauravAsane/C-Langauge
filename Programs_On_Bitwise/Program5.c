/*
write a program which checks whether First and Last bit is ON or OFF
*/

// iMask    1000 0000 0000 0000 0000 0000 0000 0001 
      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0x80000001;
   
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
        printf("First and Last Bit of '%d' is ON\n",iValue);
    }
    else
    {
        printf("First and Last Bit of '%d' is OFF\n",iValue);
    }

    return 0;
}