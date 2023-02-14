// Accept N numbers from user and accept one number from user and return index of last occurance of that number

#include<stdio.h>
#include <stdlib.h>

int LastOccur(int Arr[] , int iLength , int No)
{
	int iCnt = 0;
	int Count = 0;

	for(iCnt = (iLength-1); iCnt >= 0; iCnt--)
	{
		if(Arr[iCnt] == No )
		{
			break;
		}

	}

	return iCnt;
}

int main()
{

	int iCnt = 0;
	int iSize = 0;
	int iNo = 0;
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

	printf("Enter the Number that you want to Check :\n");
	scanf("%d",&iNo);


	printf("Enter the Elements : \n");

	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}


	iRet = LastOccur(ptr , iSize , iNo);

	if(iRet >= iSize)
	{
		printf("Number %d is not there in Array\n",iNo);
	}
	else
	{
		printf("Last Occurance of %d number is at index : %d\n",iNo,iRet);
	}
	

	free(ptr);

	return 0;
}