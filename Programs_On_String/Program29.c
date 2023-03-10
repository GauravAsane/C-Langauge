/*  Write a program which accept string from user and copy Small 
characters of that string into another string.  */

#include<stdio.h>


void StrCpySmall(char *str , char * Dest)
{

    while(*str != '\0')
    {
        if((*str >= 'a'  && *str <= 'z') || *str == ' ')
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

    StrCpySmall(Arr,Brr);
    printf("String Copied as : %s",Brr);  

    return 0;
    
}