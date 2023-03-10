/*Write a program which accept string from user and check whether 
  it contains vowels in it or not.
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
	int iCnt1 = 0;
	int iCnt2 = 0;


	while(*str != '\0')
	{

		if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o'|| *str == 'u' )
		{
			return true;
		}
		else if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O'|| *str == 'U' )
		{
			return true;
		}

		str++;
	}

}


int main()
{
	char Arr[20];
	bool bRet = false;

	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);

	bRet = ChkVowel(Arr);
	if(bRet == true)
	{
		printf("string contains vowels");
	}
	else
	{
		printf("string does not contains vowels");
	}

	return 0;
}