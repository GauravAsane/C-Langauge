//accept number from user and display its digit in reverse

#include <stdio.h>

void DisplayDigitRev(int iValue)
{

	int iDigit = 0;
	int Temp = iValue;

	if(Temp < 0)
	{
		Temp = -Temp;
	}

	while(Temp != 0)
	{
		iDigit = Temp % 10;

		printf("%d\t",iDigit);

		Temp = Temp / 10;
	}
}

int main()
{
	int iNo = 0;

	printf("Enter the Number : \n");
	scanf("%d",&iNo);

	DisplayDigitRev(iNo);

	return 0;
}