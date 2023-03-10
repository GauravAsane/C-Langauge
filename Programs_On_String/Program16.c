/*Write a program which accept string from user and convert it into 
lower case.*/

#include <stdio.h>

void StrlWrx(char * str)
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z' )
		{
			*str = *str + 32;  
		}
		str++;
	}


}

int main()
{
	char Arr[20];

	printf("Enter the String : \n");
	scanf("%[^'\n']s",Arr);

	StrlWrx(Arr);

	printf("Modified string is : %s",Arr);


	return 0;
}