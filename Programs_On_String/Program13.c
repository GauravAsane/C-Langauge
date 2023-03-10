/*Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters
*/

#include <stdio.h>

int Difference(char *str)
{
	int iCnt1 = 0;
	int iCnt2 = 0;


	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			iCnt1++;
		}
		else if(*str >= 'A' && *str <= 'Z')
		{
			iCnt2++;
		}
		str++;
	}
	return iCnt1 - iCnt2;
}


int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);

	iRet = Difference(Arr);
	printf("Diff Between Freq of Capital and Small charecters : %d\n",iRet);

	return 0;
}