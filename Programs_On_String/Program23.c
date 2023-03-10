/*Write a program which accept string from user and accept one 
character. Return Frequency of that character */

#include<stdio.h>


int CountChar(char *str, char ch)
{
    int iCnt = 0;
   
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;    
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    char cValue = '\0';
    

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);  

    printf("character Frequency is : %d",iRet);  

  

    return 0;
}