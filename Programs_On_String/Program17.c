/*Write a program which accept string from user and convert it into 
upper case.*/

#include <stdio.h>

void Struprx(char * str)
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z' )
		{
			*str = *str - 32;  
		}
		str++;
	}


}

int main()
{
	char Arr[20];

	printf("Enter the String : \n");
	scanf("%[^'\n']s",Arr);

	Struprx(Arr);

	printf("Modified string is : %s",Arr);


	return 0;
}