/*  Write a program which accept string from user and copy capital 
characters of that string into another string.  */

#include<stdio.h>


void StrCpyCap(char *str , char * Dest)
{

    while(*str != '\0')
    {
        if((*str >= 'A'  && *str <= 'Z') || *str == ' ') 
        {
            *Dest = *str;
             Dest++;            
        }

        str++;
    }


}

int main()
{
    char Arr[30];
    char Brr[30] = {'\0'};


    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrCpyCap(Arr,Brr);
    printf("String Copied as : %s",Brr);  

    return 0;
    
}