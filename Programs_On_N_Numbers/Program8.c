// Accept N numbers from user and return the difference between largest and smallest number.

#include<stdio.h>
#include <stdlib.h>


int Difference(int Arr[] , int iLength)
{
	int iCnt = 0;
	int iMin = Arr[0];
	int iMax = Arr[0];
	int diff = 0;
	

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
		else if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}

	}
	diff = iMax - iMin;

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
	printf("Difference between Largest and Smallest element from Array is : %d",iRet);

	free(ptr);

	return 0;
}