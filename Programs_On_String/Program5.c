/*Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive) */

#include <stdio.h>
#include <stdbool.h>

void DisplaySchedule(char Div)
{
	if(Div >= 'a' && Div <= 'z')
	{
		Div = Div - 32;
	}

	switch(Div)
	{
		case 'A' :
		printf(" Your Exam is at 7 AM\n");
		break; 

		case 'B' : 
		printf("Your Exam is at 8:30 AM\n");
		break;

		case 'C' :
		printf("Your Exam is at 9:20 AM\n");
		break;

		case 'D' :
		printf("Your Exam is at 10:30 AM\n");
		break;

	default:
		printf("invalid Division");

	}
}

int main()
{
	char cValue = '\0';
	printf("Enter the Division\n");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);
	return 0;
}