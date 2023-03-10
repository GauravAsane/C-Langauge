/*. Write a program which 2 strings from user and concat second string 
after first string. (Implement strcat() function).*/

#include<stdio.h>


void StrCatX(char *str , char * Dest)
{

    while(*str != '\0')
    {
        str++;
    }

    *str = ' ';
    str++;
    while(*Dest != '\0')
    {
        *str = *Dest;
         str++;
         Dest++;
    }


}

int main()
{
    char Arr[60] = {'\0'};
    char Brr[30] = {'\0'};


    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Second String\n");
    scanf(" %[^'\n']s",Brr);


    StrCatX(Arr,Brr);
    printf("String Copied as : \n%s",Arr);  

    return 0;
    
}