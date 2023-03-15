/*
    Write a program which accept two numbers from user and display position
    of common ON bits from that two numbers.

    Input : 10 15 (1010 1111)
    Output : 2 4
*/

// iMask    0000 0000 0000 0000 0000 0000 0000 0010
//          &
// iNo      0000 0000 0000 0000 0000 0000 0000 1010     
//-----------------------------------------------------
// Result   0000 0000 0000 0000 0000 0000 0000 0010      


#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

void CommonBits(UINT No1 , UINT No2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT Result1 = 0;
    UINT Result2 = 0;
    int iCnt = 0;
    int Count = 0;
   
    for(iCnt = 1 ; iCnt <= 32 ; iCnt++)     
    {
        iMask1 = 0x00000001;
        iMask2 = 0x00000001;

        iMask1 = iMask1 << iCnt-1;
        iMask2 = iMask2 <<iCnt-1; 

        Result1 = iMask1 & No1; 
        Result2 = iMask2 & No2;              

        if(Result1 == iMask1 && Result2 == iMask2 )
        { 
            printf("%d\t",iCnt);
        }

    }    
   
}


int main()
{
    UINT Value1 = 0;
    UINT Value2 = 0;
  
    printf("Enter the First Number : \n");
    scanf("%d",&Value1);

    printf("Enter the Second Number : \n");
    scanf("%d",&Value2);

    CommonBits(Value1 , Value2);

    return 0;
}