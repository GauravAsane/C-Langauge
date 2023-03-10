/* Write a program which accept string from user reverse that string 
in place. */

#include<stdio.h>


void StrRevX(char *str)
{

    char *Start = str;
    char *End = str;
    char temp = '\0';
    
    while(*End != '\0')
    {
        End++;
    }
    End--;


    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;
        Start++;
        End--;       
        
    }


}

int main()
{
    char Arr[10];


    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);


    StrRevX(Arr);
    printf("Modified String is : %s",Arr);  

    return 0;
    
}