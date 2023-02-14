// Accept N numbers from user and accept Range, Display all elements from that range

#include<stdio.h>
#include <stdlib.h>

void Range(int Arr[] , int iLength , int iStart , int iEnd)
{
	int iCnt = 0;
	int Count = 0;

	printf("Numbers having range of %d to %d is\n",iStart, iEnd);

	for(iCnt = 0; iCnt < iLength ; iCnt++)
	{
		if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
		{
			printf("%d\t",Arr[iCnt]);
			Count++;
		}
	}

	if(Count == 0)
	{
		printf("There is No elements in range of %d to %d\n",iStart , iEnd);
	}

}


int main()
{

	int iCnt = 0;
	int iSize = 0;
	int *ptr = NULL;
	int First = 0;
	int Last = 0;

	
	ptr = (int*)malloc(iSize * sizeof(int));

	if(ptr == NULL)
	{
		printf("Unable to Allocate the memory\n");
		return -1;
	}


	printf("Enter Number of elements : \n");
	scanf("%d",&iSize);

	printf("Enter the starting point : \n");
	scanf("%d",&First);

	printf("Enter the Ending point : \n");
	scanf("%d",&Last);


	printf("Enter the Elements : \n");

	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}


	Range(ptr , iSize , First , Last);

	

	free(ptr);

	return 0;
}