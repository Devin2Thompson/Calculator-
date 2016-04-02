#include "CalculatorClass.h"
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>


CalculatorClass::CalculatorClass()
{
	char op2[10];
	char op1[10];
	int HowMany;
	float num1, num2;

	printf("How many numbers would you like to operate on?\n");
	scanf("%d", &HowMany);

	if (HowMany == 1)
	{
		printf("Select your operation(sq, cu, inv, sqrt , abs)\n");
		scanf("%s", &op1);
		printf("input your number\n");
		scanf("%f", &num1);

		if (strcmp(op1, "sq") == 0)
		{

			printf("%f^2=%f", num1, num1*num1);
			_getch();
			return 0;
		}
		else if (strcmp(op1, "inv") == 0)
		{
			printf("1/%f=%f", num1, 1 / num1);
			_getch();
			return 0;
		}

		else if (strcmp(op1, "cu") == 0)
		{
			printf("%f^3=%f", num1, num1*num1*num1);
			_getch();
			return 0;
		}
		else if (strcmp(op1, "sqrt") == 0)
		{
			printf("sqrt %f=%f", num1, sqrt(num1));
			_getch();
			return 0;
		}
		else if (strcmp(op1, "abs") == 0)
		{
			if (num1 < 0)
			{
				printf("|%f|=%f", num1, -1 * num1);
				_getch();
				return 0;
			}
			else
			{
				printf("|%f|=%f", num1, num1);
				_getch();
				return 0;
			}

		}

	}
	if (HowMany == 2)
	{
		printf("Select your operator(+,-,*,/)\n");
		scanf("%s", &op2);
		printf("input your numbers to operate upon\n");
		scanf("%f%f", &num1, &num2);
		if (strcmp(op2, "+") == 0)
		{
			printf("%f +%f = %f", num1, num2, num1 + num2);
			_getch();
			return 0;
		}
		else if (strcmp(op2, "-") == 0)
		{
			printf("%f - %f = %f", num1, num2, num1 - num2);
			_getch();
			return 0;
		}
		else if (strcmp(op2, "*") == 0)
		{
			printf("%f - %f = %f", num1, num2, num1 * num2);
			_getch();
			return 0;
		}
		else if (strcmp(op2, "/") == 0)
		{
			printf("%f - %f = %f", num1, num2, num1 / num2);
			_getch();
			return 0;
		}
	}
	{

	}
}


CalculatorClass::~CalculatorClass()
{
}
