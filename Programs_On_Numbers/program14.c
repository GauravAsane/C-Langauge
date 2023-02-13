// Accept number from user and display its multiplication of factors

#include <stdio.h>

int MultFact(int iValue)
{
	int iCnt = 0;
	int iMult = 1;

	for(iCnt = 1 ; iCnt <= (iValue/2); iCnt++)
	{
		if(iValue % iCnt == 0)
		{
			iMult = iMult * iCnt;
		}
	}
	return iMult;
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	cout<<"Enter the Number :\n";
	cin>>iNo;

	iRet = MultFact(iNo);

	cout<<"Multiplication of factors of "<<iNo<<" is : "<<iRet<<"\n";
	

	return 0;
}