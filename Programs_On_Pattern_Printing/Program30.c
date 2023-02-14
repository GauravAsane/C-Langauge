/*Accept number from user and display below pattern
 input : iRow = 5 , iCol = 5

 output : 	*	*	*	*	*
 			*	#	#	*	*
 			*	#	*	$	*
 			*	*	$	$	*
 			*	*	*	*	*
*/				


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	


	for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++)
	{
		
		for(iCnt2 = iCol; iCnt2 > 0; iCnt2--)
		{	
			if(iCnt2 == 1 || iCnt2 == iCol || iCnt1 == 1  || iCnt1 == iRow || iCnt1 == iCnt2)
			{
				printf("*\t");
			}
			else if(iCnt2 > iCnt1)
			{
				printf("#\t");
			}
			else
			{
				printf("$\t");
			}
		}

		printf("\n");
	}
	printf("\n");

}

int main()
{
	int Row = 0;
	int Column = 0;

	printf("Enter the Number Of Rows :\n");
	scanf("%d",&Row);

	printf("Enter the Number Of Columns :\n");
	scanf("%d",&Column);

	Pattern(Row,Column);

	return 0;
}