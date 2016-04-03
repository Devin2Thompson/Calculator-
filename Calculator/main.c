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
	int x = 1, i = 1;
	
	float PI = 3.141592653589793;
	int function; //function that they user will do
	char op2[10], opP[5], vPi[5], again[10],Tfunction[10],DR[20], op1[10]; //option 2, 2 numbers	
	int HowMany; // the number of numbers the user wants to operate on
	float num1, num2, degrad, sPi; // floats, intigers with decimals, of numbers 1 and 2
	
	do
	{


			printf("What would you like to do? (trig (input 1), basic(input 2), algebra(input 3))\n"); //askking what type of function the user wants to do
			scanf("%d", &function); //taking their input
			{
				if ((function != 1) && (function != 2) && (function != 3))
				{
					printf("Error! Please enter 1, 2, or 3\n");
					

				}
				else
				{
					x = 0;
				}

			
			{

				if (function == 2)
				{
					printf("Select your operator(+,-,*,/)\n");
					scanf("%s", &op2);

					if ((strcmp(op2, "+") != 0) && (strcmp(op2, "-") != 0) && (strcmp(op2, "*") != 0) && (strcmp(op2, "/") != 0))
					{
						printf("Error, please enter an accepted character.\n");

					}

					{
						if (strcmp(op2, "+") == 0)//addition
						{
							printf("input your numbers to operate upon, 2 numbers \n");
							scanf("%f%f", &num1, &num2);
							printf("%f \n", num1 + num2);
							_getch();

						}
						else if (strcmp(op2, "-") == 0)//subtraction
						{
							printf("input your numbers to operate upon, 2 numbers \n");
							scanf("%f%f", &num1, &num2);
							printf(" %f \n", num1 - num2);
							_getch();

						}
						else if (strcmp(op2, "*") == 0)//multiplication
						{
							printf("input your numbers to operate upon, 2 numbers \n");
							scanf("%f%f", &num1, &num2);
							printf("%f \n", num1 * num2);
							_getch();

						}
						else if (strcmp(op2, "/") == 0)//division
						{
							printf("input your numbers to operate upon, 2 numbers \n");
							scanf("%f%f", &num1, &num2);
							printf("%f \n", num1 / num2);
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
						if (num1 < 0)
						{
							num1 = -1 * num1;
							printf("%fi", sqrt(num1));
						}
						else {
							printf("%f", sqrt(num1));
						}

						_getch();

					}
					else if (strcmp(op1, "abs") == 0)//finding the absolute value of their number
					{
						printf("input your number\n");
						scanf("%f", &num1);
						if (num1 < 0)
						{

							printf("%f", -1 * num1);
							_getch();

						}
						else
						{

							printf("%f", num1);
							_getch();

						}
					}

				}
				else if (function == 1)
				{
					{

						printf(" degrees or radians?\n");//are you using degree or radians
						scanf("%s", &DR);

						printf("If you're using radians, and value is PI being multiplied or divided by a number,"
							"enter, y, if not, type n\n");
						scanf("%s", &vPi);

						if (strcmp(vPi, "y") == 0)
						{
							printf("Is pi being multiplied or divided?(m or d)\n");//are you multiplying or diving pi
							scanf("%s", &opP);

							if (strcmp(opP, "m") == 0)
							{
								printf("Pi is being multiplied by what number?\n");//scalar multiple
								scanf("%d", &sPi);
								degrad = PI*sPi;
							}
							if (strcmp(opP, "d") == 0)
							{
								printf("Pi is being divided by what number?\n");//scalar division
								scanf("%f", &sPi);
								degrad = PI / sPi;

							}
							
						}
						else if (strcmp(vPi, "n") == 0)
						{

							printf("Which trig function? (sin, cos, tan)\n");
							scanf("%s", &Tfunction);
							if ((strcmp(Tfunction, "sin") != 0) && (strcmp(Tfunction, "cos") != 0) && (strcmp(Tfunction, "tan") != 0))
							{
								printf("Error, please enter an accepted character.\n");

							}

							if (strcmp(Tfunction, "sin") == 0)

							{


								if (strcmp(DR, "degrees") == 0)
								{
									printf("What value of Degrees\n");
									scanf("%f", &degrad);
									printf("%f \n", sin((degrad*(PI / 180))));

									_getch();

								}
								else if (strcmp(DR, "radians") == 0)
								{
									
										printf("What value of radians?");
										scanf("%f", &degrad);
									
									printf("%f \n", sin(degrad));

									_getch();
								}
							}
							else if (strcmp(Tfunction, "cos") == 0)
							{
								
								if (strcmp(DR, "degrees") == 0)
								{
									printf("%f \n", cos((degrad*(PI / 180))));

									_getch();

								}
								else if (strcmp(DR, "radians") == 0)
								{
									
										printf("What value of radians?");
										scanf("%f", &degrad);
									
									printf("%f \n", cos(degrad));
									_getch();

								}


							}

							if (strcmp(Tfunction, "tan") == 0)
							{
								
								if (strcmp(DR, "degrees") == 0)
								{
									printf("%f \n", tan(degrad*(PI / 180)));

									_getch();

								}
								else if (strcmp(DR, "radians") == 0)
								{
									
										printf("What value of radians?");
										scanf("%f", &degrad);
									
									printf("%f \n", tan(degrad));
									_getch();
								}

							}
						}
					}
				}

					}
				}
				printf("Compute again? (y/n)\n ");
				scanf(" %s", &again);
				if (strcmp(again, "y") == 0)
				{
					i = 1;
				}
				else
				{
					i = 0;
				}
			

		 

	}while (i = 1);

	_getch();
		
	return 0;

}


