// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


int main()
{
	int   result, i[3];

	printf("Enter three integers: ");
	result = scanf_s("%i %i %i", &i[0], &i[1], &i[2]); // C4996
													   // Note: _cscanf is deprecated; consider using _cscanf_s instead
	printf("\r\nYou entered ");
	while (result--)
		printf("%i ", i[result]);
	printf("\r\n");
	
	printf("End.");
	
	result = _getch();

	return 0;
}

