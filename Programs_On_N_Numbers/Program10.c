// Accept N numbers from user and Display Summation of digits of each number

#include<stdio.h>
#include <stdlib.h>


void DisplaySum(int Arr[] , int iLength)
{
	int iCnt = 0;
	int iDigit = 0;
	int Temp = 0;
	int iSum = 0;
	

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		Temp = Arr[iCnt];

		while(Temp != 0)
		{
			iDigit = Temp % 10;
			iSum = iSum + iDigit;
			Temp = Temp / 10;
		}
		printf("Summation of %d digits are	:	%d\n",Arr[iCnt],iSum);

		iSum = 0;

	}


}

int main()
{

	int iCnt = 0;
	int iSize = 0;
	int *ptr = NULL;

	printf("Enter Number of elements : \n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize * sizeof(int));

	if(ptr == NULL)
	{
		printf("Unable to Allocate the memory\n");
		return -1;
	}

	printf("Enter the Elements : \n");

	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}


	DisplaySum(ptr , iSize);


	free(ptr);

	return 0;
}