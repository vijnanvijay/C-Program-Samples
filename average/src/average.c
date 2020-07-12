/*
 ============================================================================
 Name        : average.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To find average of 3 numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,d;
	setbuf(stdout,NULL);
	printf("To find average of 3 numbers");
	printf("\n----------------------------\n");
	printf("Enter 1st Number : ");
	scanf("%f",&a);
	printf("Enter 2nd Number : ");
	scanf("%f",&b);
	printf("Enter 3rd Number : ");
	scanf("%f",&c);
	d=(a+b+c)/3;
	printf("Average of 3 Numbers :%.2f",d);

	return EXIT_SUCCESS;
}
