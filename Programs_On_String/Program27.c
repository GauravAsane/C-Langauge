/* Write a program which accept string from user and copy the 
 contents of that string into another string.

 Note : If third parameter is greater than the size of source string then 
copy whole string into destination.  */

#include<stdio.h>


void StrNcpy(char *str , char * Dest, int No)
{

    while((*str != '\0') && (No != 0))
    {
        *Dest = *str;
        Dest++;
        str++;
        No--;
    }


}

int main()
{
    char Arr[30];
    char Brr[30] = {'\0'};
    int iCnt = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Number of character you want to Copy\n");
    scanf("%d",&iCnt);

    StrNcpy(Arr,Brr , iCnt);
    printf("String Copied as : %s",Brr);  

    return 0;
    
}