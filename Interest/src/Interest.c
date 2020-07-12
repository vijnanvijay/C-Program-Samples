/*
 ============================================================================
 Name        : Interest.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To calculate Simple Interest
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,si;
	setbuf(stdout,NULL);
	printf("To Calculate Simple Interst");
	printf("\n---------------------------");
	printf("\nEnter Principal Amount: ");
	scanf("%d",&p);
	printf("Enter Interest Rate   : ");
	scanf("%f",&r);
	printf("Enter Number of years : ");
	scanf("%f",&n);

	si=p*n*(r/100);
	printf("\nSimple Interest       : %.2f",si);
	return EXIT_SUCCESS;
}
