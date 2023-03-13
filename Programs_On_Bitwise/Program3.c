/*
write a program which checks whether 7th, 15th & 21th , 28th bit is ON or OFF
*/

// iMask    0000 1000 0001 0000 0100 0000 0100 0000 
      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0x08104040;
   
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
        printf("7th, 15th, 21th ,28th Bit of '%d' is ON\n",iValue);
    }
    else
    {
        printf("7th, 15th, 21th ,28th Bit of '%d' is OFF\n",iValue);
    }

    return 0;
}