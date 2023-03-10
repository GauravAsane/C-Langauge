//	Write a program which accept string from user and count number of 
//	Small characters

#include <stdio.h>

int CountSmall(char *str)
{
	int iCnt = 0;


	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			iCnt++;
		}

		str++;
	}
	return iCnt;
}


int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);

	iRet = CountSmall(Arr);
	printf("Number of Small Charecter in String is : %d\n",iRet);

	return 0;
}