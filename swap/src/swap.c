/*
 ============================================================================
 Name        : swap.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To Swap two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;
	setbuf(stdout,NULL);
	printf("To Swap 2 entered numbers");
	printf("\n--------------------------\n");
	printf("Enter value for A : ");
	scanf("%d",&a);
	printf("Enter value for B : ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping    : A=%d & B=%d",a,b);

	return EXIT_SUCCESS;
}
