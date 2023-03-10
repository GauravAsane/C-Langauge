/* .Write a program which accept string from user and copy the 
contents of that string into another string. (Implement strcpy() 
function) */

#include<stdio.h>


void StrcpyX(char *str , char * Dest)
{

    while(*str != '\0')
    {
        *Dest = *str;
        Dest++;
        str++;
    }


}

int main()
{
    char Arr[30];
    char Brr[30] = {'\0'};


    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);


    StrcpyX(Arr,Brr);
    printf("String Copied as : %s",Brr);  

    return 0;
    
}