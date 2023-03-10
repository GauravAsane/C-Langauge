/*  Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255.*/

#include <stdio.h>

void DisplayASCII()
{
	int iNo = 127;
	int iCnt = 0;

	printf("Dec\tHex\tChar\n");
	for(iCnt = 0; iCnt <= iNo;iCnt++)
	{
		printf("%d\t%x\t%c\n",iCnt,iCnt,iCnt);
	}

}

int main()
{
	DisplayASCII();
	return 0;
}