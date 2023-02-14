/*Accept number from user and display below pattern
 input : iRow = 4 , iCol = 5

 output : 	2 	4 	6 	8 	10
 			1 	3 	5 	7 	9
 			2 	4 	6 	8 	10
 			1 	3 	5 	7 	9

*/


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	int Temp1 = 0;
	int Temp2 = 1;

	for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++)
	{
		for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
		{
			if(iCnt1 % 2 == 0)
			{
				printf("%d\t",Temp2);
				Temp2 = Temp2 + 2;
			}
			else
			{
				printf("%d\t",Temp1+=2);
			}

		}
		Temp1 = 0;
		Temp2 = 1;
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