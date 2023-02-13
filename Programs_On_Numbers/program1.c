// Accept two numbers from user and Divide that two numbers. 

#include <stdio.h>

float Division(int iValue1 , int iValue2)
{
	float iAns = 0;

	if(iValue2 == 0)
	{
		return -1;
		
	}
	else
	{
		iAns = iValue1 / iValue2;
		return iAns;
	}

}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	float iRet = 0;

	printf("Enter the First Number :\n");
	scanf("%d",&iNo1);

	printf("Enter the second number : \n");
	scanf("%d",&iNo2);

	iRet = Division(iNo1 , iNo2);

	if(iRet == -1)
	{
		printf("Error : Denominator number should not be 0 \n");
	}
	else
	{
		printf("Division is : %f\n",iRet);
	}
	

	return 0;
}