// Accept N numbers from user and return the Largetst Number.

#include<stdio.h>
#include <stdlib.h>


int Maximum(int Arr[] , int iLength)
{
	int iCnt = 0;
	int iMax = Arr[0];
	

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}

	}

	return iMax;

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


	iRet = Maximum(ptr , iSize);
	printf("Largest element from Array is : %d",iRet);

	free(ptr);

	return 0;
}