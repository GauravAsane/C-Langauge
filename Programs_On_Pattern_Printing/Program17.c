/*Accept number from user and display below pattern
 input : iRow = 5 , iCol = 5

 output : 	a 	b 	c 	d 	e
 			1 	2 	3 	4 	5
 			a 	b 	c 	d 	e
 			1 	2 	3 	4 	5
 			a 	b 	c 	d 	e

*/


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	char ch = 'a';

	for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++)
	{
		for(iCnt2 = 1,ch = 'a'; iCnt2 <= iCol; iCnt2++,ch++)
		{
			if(iCnt1 % 2 == 0)
			{
				printf("%d\t",iCnt2);
			}
			else
			{
				printf("%c\t",ch);
			}

		}
		ch = 'a';
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