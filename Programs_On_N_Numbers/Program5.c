// Accept N numbers from user and Display all such elements which are multiple of 11.

#include<stdio.h>
#include <stdlib.h>


void Display(int Arr[] , int iLength)
{
	int iCnt = 0;
	int chk = 0;


	printf("Number which is multiple of  11 : \n");

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 11 == 0)
		{
			printf("%d\t",Arr[iCnt]);
			chk++;

		}

	}
	if(chk == 0)
	{
		printf("There is no such elements which is multiple of 11");
	}


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


	Display(ptr , iSize);

	free(ptr);

	return 0;
}