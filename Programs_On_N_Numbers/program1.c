// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include <stdlib.h>


int Difference(int Arr[] , int iLength)
{
	int iCnt = 0;
	int ESum = 0;
	int OSum = 0;
	int diff = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			ESum = ESum + Arr[iCnt];
		}
		else
		{
			OSum = OSum + Arr[iCnt];
		}
	}


	diff = ESum - OSum;

	return diff;
}

int main()
{

	int iRet = 0;
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


	iRet = Difference(ptr , iSize);
	printf("Difference between summation of even elements and odd elements is : %d\n",iRet);

	free(ptr);

	return 0;
}