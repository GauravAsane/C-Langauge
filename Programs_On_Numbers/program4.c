// Accept number from user and print that number of * pm screen

#include <stdio.h>


void Display(int Value)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= Value; iCnt++)
	{
		printf("*\t");
	}
	printf("\n");
}

int main()
{
	int No1 = 0;

	printf("Enter the Number :\n");
	scanf("%d",&No1);

	Display(No1);


	return 0;
}