/*
 ============================================================================
 Name        : Calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,choice=0;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);

	printf("\nFor Addition press 1");
	printf("\nFor Substraction press 2");

	scanf("%d",&choice);
	printf("\nResult:");
	switch(choice)
	{
	case 1:
		printf("%d",a+b);
		break;
	case 2:
		printf("%d",a-b);
		break;
	default:
		printf("Invalid Choice");
	}


	return EXIT_SUCCESS;
}
