/*Accept number from user and display below pattern
 input : iRow = 5 , iCol = 5

 output : 	1 	2 	3 	4 	5
 			1	*	*	*	5
 			1	*	*	*	5
 			1	*	*	*	5
 			1	2	3	4	5

*/


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	


	for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++)
	{
		
		for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
		{	
			if(iCnt1 == 1 || iCnt1 == iRow || iCnt2 == 1 || iCnt2 == iCol)
			{
				printf("%d\t",iCnt2);
			}
			else
			{
				printf("*\t");
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