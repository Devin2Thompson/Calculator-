#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	TheCalc();
}
TheCalc()

{
	int i =1;
	float PI = 3.141592653589793;
	int function; //function that they user will do
	char op2[10]; //option 2, 2 numbers	
	char op1[10]; // option 1, 1 number
	int HowMany; // the number of numbers the user wants to operate on
	float num1, num2, degrad; // floats, intigers with decimals, of numbers 1 and 2
	char DR[20];//degree or radians
	char Tfunction[10];//which trig function
	char again[3];

	

	do
	{

		printf("What would you like to do? (trig (input 1), basic(input 2), algebra(input 3))\n"); //askking what type of function the user wants to do
		scanf("%d", &function); //taking their input
		if ((function != 1) && (function != 2) && (function != 3))
		{
			printf("Error! Please enter 1, 2, or 3\n");

			
		}
		{
			
			if (function == 2)
			{
				printf("Select your operator(+,-,*,/)\n");
				scanf("%s", &op2);

				if ((strcmp(op2, "+") != 0)&& (strcmp(op2, "-") != 0) && (strcmp(op2, "*") != 0) && (strcmp(op2, "/") != 0))
				{
					printf("Error, please enter an accepted character.\n");
					
				}
				
				{
					if (strcmp(op2, "+") == 0)//addition
					{
						printf("input your numbers to operate upon, 2 numbers \n");
						scanf("%f%f", &num1, &num2);
						printf("%f", num1 + num2);
						_getch();
						
					}
					else if (strcmp(op2, "-") == 0)//subtraction
					{
						printf("input your numbers to operate upon, 2 numbers \n");
						scanf("%f%f", &num1, &num2);
						printf(" %f", num1 - num2);
						_getch();
						
					}
					else if (strcmp(op2, "*") == 0)//multiplication
					{
						printf("input your numbers to operate upon, 2 numbers \n");
						scanf("%f%f", &num1, &num2);
						printf("%f", num1 * num2);
						_getch();
						
					}
					else if (strcmp(op2, "/") == 0)//division
					{
						printf("input your numbers to operate upon, 2 numbers \n");
						scanf("%f%f", &num1, &num2);
						printf("%f", num1 / num2);
						_getch();
						
					}
				}

			}

			

			else if (function == 3)//Start of the algebraic funciton
			{
				printf("Select your operation(sq, cu, inv, sqrt , abs)\n");
				scanf("%s", &op1);
				if ((strcmp(op1, "sq") != 0) && (strcmp(op1, "cu") != 0) && (strcmp(op1, "sqrt") != 0) && (strcmp(op1, "inv") != 0) && (strcmp(op1, "abs") != 0))
				{
					printf("Error, please enter an accepted character.\n");

				}
				

				if (strcmp(op1, "sq") == 0)//squaring their number
				{
					printf("input your number\n");
					scanf("%f", &num1);
					printf("%f", num1*num1);
					_getch();
					
				}
				else if (strcmp(op1, "inv") == 0)//taking the inverse of their number
				{
					printf("input your number\n");
					scanf("%f", &num1);
					printf("%f", 1 / num1);
					_getch();
					
				}

				else if (strcmp(op1, "cu") == 0)//cubing their number
				{
					printf("input your number\n");
					scanf("%f", &num1);
					printf("%f", num1*num1*num1);
					_getch();
					
				}
				else if (strcmp(op1, "sqrt") == 0)//finding the square root of their number
				{
					printf("input your number\n");
					scanf("%f", &num1);
					printf("%f", sqrt(num1));
					_getch();
					
				}
				else if (strcmp(op1, "abs") == 0)//finding the absolute value of their number
				{
					if (num1 < 0)
					{
						printf("input your number\n");
						scanf("%f", &num1);
						printf("%f", -1 * num1);
						_getch();
						
					}
					else
					{
						printf("input your number\n");
						scanf("%f", &num1);
						printf("%f", num1);
						_getch();
						
					}
				}

			}
			else if (function == 1)
			{
				printf("Which trig function? (sin, cos, tan)\n");
				scanf("%s", &Tfunction);
				printf("Are you using degrees or radians?\n");
				scanf("%s", &DR);
				printf("What value of Degrees or radians?\n");
				scanf("%f", &degrad);
				{
					if (strcmp(Tfunction, "sin") == 0)
					{
						if (strcmp(DR, "degrees") == 0)
						{
							printf("%f", sin((degrad*(PI / 180))));

							_getch();
							
						}
						else if (strcmp(DR, "radians") == 0)
						{
							printf("%f", sin(degrad));

							_getch();
						}
					}
					else if (strcmp(Tfunction, "cos") == 0)
					{
						if (strcmp(DR, "degrees") == 0)
						{
							printf("%f", cos((degrad*(PI / 180))));

							_getch();
							
						}
						else if (strcmp(DR, "radians") == 0)
						{
							printf("%f", cos(degrad));
							_getch();
							
						}
						else if (strcmp(Tfunction, "tan") == 0)
						{
							if (strcmp(DR, "degrees") == 0)
							{
								printf("%f", tan(degrad*(PI / 180)));

								_getch();
								
							}
							else if (strcmp(DR, "radians") == 0)
							{
								printf("%f", degrad, tan(degrad));
								_getch();
								
							}
						}

					}
				}
			}
			printf("Compute again? (Y/N) \n");
			scanf("%s", &again);
			if (strcmp(again, "Y") == 0)
			{
				i = 1;
			}
			else
			{
				i = 0;
			}
		} 
		
		

	} while (i == 1);
		_getch();
		return 0;
	

}


////////////////////////////////////////////////////////////////

		/*printf("How many numbers would you like to operate on?\n");
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

		}*/
