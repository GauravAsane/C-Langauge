// Accept number from user and display below pattern
// input : 5
//  1	*	2	*	3	*	4	*	5	*	

#include <stdio.h>

void Pattern(int iValue)
{
	int iCnt = 0;

	printf("\nPattern Printed : \n");

	for(iCnt = 1 ; iCnt <= iValue  ; iCnt++)
	{
		printf("%d\t*\t",iCnt);
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