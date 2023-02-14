// Accept number from user and display below pattern
// input : 5
//  5	#	4	#	3	#	2	#	1	# 	

#include <stdio.h>

void Pattern(int iValue)
{
	int iCnt = 0;

	printf("\nPattern Printed : \n");

	for(iCnt = iValue ; iCnt > 0  ; iCnt--)
	{
		printf("%d\t#\t",iCnt);
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