/*Accept number from user and display below pattern
 input : iRow = 4 , iCol = 5

 output : 	4	4	4	4
 			3	3	3	3
 			2 	2 	2 	2
 			1 	1 	1 	1

*/


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0;
	int iCnt2 = 0;

	for(iCnt1 = iRow ; iCnt1 > 0; iCnt1--)
	{
		for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
		{
			printf("%d\t",iCnt1);
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