// Accept number from user and display below pattern
// input : 5
// A 	B 	C 	D 	E 	

#include <stdio.h>

void Pattern(int iValue)
{
	int iCnt = 0;
	char ch = '\0';

	if(iValue <= 0)
	{
		printf("please enter valid Number\n");
		return;
	}

	for(iCnt = 1 , ch = 'A'; iCnt <= iValue ; iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}

int main()
{
	int iNo = 0;

	printf("Enter the Number Of Elements :\n");
	scanf("%d",&iNo);

	Pattern(iNo);

	return 0;
}