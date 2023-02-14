// Accept number from user and display below pattern
// input : 8
//  2	4	6	8	10	12	14	16	

#include <stdio.h>

void Pattern(int iValue)
{
	int iCnt = 0;
	int Num = 0;

	printf("\nPattern Printed : \n");

	for(iCnt = 0 ; iCnt < iValue  ; iCnt++)
	{
		
		printf("%d\t",Num+=2);
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