/* Write a program which accept string from user and copy that 
characters of that string into another string by removing all white 
spaces.*/

#include<stdio.h>


void StrCpyX(char *str , char * Dest)
{
    char *Start = str;
    char *End = str;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            Dest--;
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


    StrCpyX(Arr,Brr);

    printf("String Copied without Whitespaces : \n%s",Brr);  

    return 0;
    
}