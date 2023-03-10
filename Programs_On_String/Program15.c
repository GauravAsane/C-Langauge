/* Write a program which accept string from user and display it inn 
	reverse order.
*/

#include <stdio.h>
#include <stdbool.h>

void Reverse(char *str)
{

	if(*str != '\0')
	{
			Reverse(str+1);
			printf("%c",*str);
	}



}


int main()
{
	char Arr[20];
	bool bRet = false;

	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);

	Reverse(Arr);


	return 0;
}