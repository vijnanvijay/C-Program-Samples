/*
 ============================================================================
 Name        : increment.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : The concept of pre-increment & post-increment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 10, b;
	setbuf(stdout, NULL);
	printf("Variable 'a' is assigned to : %d",a);
	a++;
	printf("\nPost-Increment a++ , result is : %d",a);
	a=10;
	++a;
	printf("\nPre-Increment ++a, result is   : %d",a);
	a=10;
	b=a++;
	printf("\nPost-Increment with b=a++, result: a=%d & b=%d",a,b);
	a=10;
	b=++a;
	printf("\nPre-Increment with b=++a, result : a=%d & b=%d",a,b);

	return EXIT_SUCCESS;
}
