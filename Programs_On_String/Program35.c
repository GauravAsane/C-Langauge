/*  Write a program which accept string from user and copy that 
characters of that string into another string by toggling the case */

#include<stdio.h>


void StrCpyToggle(char *str , char * Dest)
{
    char *Start = str;
    char *End = str;

    while(*str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z' )
        {
            *Dest = *str + 32;
        }
        else if(*str >= 'a' &&  *str <= 'z')
        {
            *Dest = *str - 32;
        }
        else
        {
            *Dest = *str;
        }
        str++;
        Dest++;
    }
    

}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};


    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);


    StrCpyToggle(Arr,Brr);

    printf("String Copied as : \n%s",Brr);  

    return 0;
    
}