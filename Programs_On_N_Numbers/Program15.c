// Accept N numbers from user and accept one number from user and return product of all odd elements.

#include<stdio.h>
#include <stdlib.h>

int Product(int Arr[] , int iLength )
{
	int iCnt = 0;
	int iMult = 1;

	for(iCnt = (iLength-1); iCnt >= 0; iCnt--)
	{
		if(Arr[iCnt] % 2 != 0)
		{
			iMult = iMult * Arr[iCnt];
		}

	}

	return iMult;
}

int main()
{

	int iCnt = 0;
	int iSize = 0;
	int iRet = 0;
	int *ptr = NULL;

	
	ptr = (int*)malloc(iSize * sizeof(int));

	if(ptr == NULL)
	{
		printf("Unable to Allocate the memory\n");
		return -1;
	}


	printf("Enter Number of elements : \n");
	scanf("%d",&iSize);



	printf("Enter the Elements : \n");

	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}


	iRet = Product(ptr , iSize);

	if(iRet == 1)
	{
		printf("There is No Odd element in this Array");
	}
	else
	{
		printf("Product of odd elements from Array is : %d\n",iRet);
	}
	

	free(ptr);

	return 0;
}