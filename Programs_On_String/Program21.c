/* Write a program which accept string from user and display only 
digits from that string*/

#include <stdio.h>

int CountWhite(char * str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str == ' ')
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

	printf("Enter the String : \n");
	scanf("%[^'\n']s",Arr);

	iRet = CountWhite(Arr);
	printf("Number of white spaces in string is : %d\n",iRet);
	
	return 0;
}