/* Write a program which accept string from user and copy that 
characters of that string into another string in reverse order.*/

#include<stdio.h>


void StrCpyRev(char *str , char * Dest)
{
    char *Start = str;
    char *End = str;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(*str != '\0')
    {

        *Dest = *End;
        str++;
        Dest++;
        End--;
    }


}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};


    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);


    StrCpyRev(Arr,Brr);

    printf("String Copied in reverse order : \n%s",Brr);  

    return 0;
    
}