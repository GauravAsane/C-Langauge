/*Accept number from user and display below pattern
 input : iRow = 4 , iCol = 4

 output : 	A 	B 	C 	D
 			a 	b 	c 	d
			A 	B 	C 	D
 			a 	b 	c 	d
*/


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
	int iCnt1 = 0;
	int iCnt2 = 0;
	char ch = 'A';
	char ch2 = 'a';

	for(iCnt1 = 1 ; iCnt1 <= iRow; iCnt1++)
	{
		for(iCnt2 = 1,ch = 'A'; iCnt2 <= iCol; iCnt2++,ch++)
		{
			if(iCnt1 % 2 != 0)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("%c\t",ch2);
				ch2++;
			}
			
		}
		ch2 = 'a';
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