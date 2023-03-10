/* Write a program which accept string from user and copy that 
characters of that string into another string by converting all small 
characters into capital case. */

#include<stdio.h>


void StrCpySmall(char *str , char * Dest)
{
    char *Start = str;
    char *End = str;

    while(*str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z' )
        {
            *Dest = *str + 32;
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


    StrCpySmall(Arr,Brr);

    printf("String Copied : \n%s",Brr);  

    return 0;
    
}