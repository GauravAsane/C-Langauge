// Accept N numbers from user and Display all such numbers which contains 3 digits in it;

#include<stdio.h>
#include <stdlib.h>


void Display(int Arr[] , int iLength)
{
	int iCnt = 0;
	int Count = 0;
	int iDigit = 0;
	int Temp = 0;
	
	printf("Numbers which contains 3 digits are :\n");
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		Temp = Arr[iCnt];

		while(Temp != 0)
		{
			Count++;
			Temp = Temp / 10;
		}

		if(Count == 3)
		{
			printf("%d\t",Arr[iCnt]);
		}

		Count = 0;

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


	Display(ptr , iSize);


	free(ptr);

	return 0;
}