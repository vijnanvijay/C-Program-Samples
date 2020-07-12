/*
 ============================================================================
 Name        : sum.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To find sum of given two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	float b,c;
	setbuf(stdout,NULL);
	printf("To find sum of two numbers");
	printf("\n--------------------------\n");
	printf("Enter 1st Number  : ");
	scanf("%d",&a);
	printf("Enter 2nd Number  : ");
	scanf("%f",&b);
	c = a + b;
	printf("Sum of two Numbers: %.2f",c);

	return EXIT_SUCCESS;
}
