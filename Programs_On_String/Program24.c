/*Write a program which accept string from user and accept one 
character. Return index of Last occurrence of that character */

#include<stdio.h>


int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int Index = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            Index = iCnt;   
        }
        iCnt++;
        
        str++;
    }
    return Index;

}

int main()
{
    char Arr[10];
    int iRet = 0;
    char cValue = '\0';
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);  

    if(iRet != -1)
    {
       printf("character Location index is : %d",iRet);  
    }
    else
    {
        printf("character '%c' is not there",cValue);
    }
     

  

    return 0;
    
}