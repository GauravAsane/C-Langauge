// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

#include <stdio.h>


void Display(int Value)
{
	if(Value < 10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}

int main()
{
	int No1 = 0;

	printf("Enter the Number :\n");
	scanf("%d",&No1);

	Display(No1);


	return 0;
}