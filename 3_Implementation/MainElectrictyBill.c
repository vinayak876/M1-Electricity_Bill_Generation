#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MainElectricityBill.h"
#include "ElectricityBill.h"
void Urban();
void Rural();
void main()
{ 
	details();
	int option;
	do
	{
		printf("****Electricity Bill Generation****\n");
		printf("Please enter your choice from below (urban/rural):\n");
		printf("1. URBAN Area\n");
		printf("2. RURAL Area\n");
		printf("3. EXIT\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			Urban();
			break;
		case 2:
			Rural();
			break;
		default:
			printf("SORRY WRONG CHOICE!\n");
			printf("Please choose from 1 or 2\n");
		}
		getch();
	} while (option != 3);
}
