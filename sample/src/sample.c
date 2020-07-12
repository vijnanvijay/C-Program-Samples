/*
 ============================================================================
 Name        : sample.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	setbuf(stdout,NULL);
	printf("!!!Hello World!!!");/* prints !!!Hello World!!! */
	printf("\n");
	printf("Enter a Number   : ");
	scanf("%d",&a);
	printf("Entered Number is: %d",a);
	return EXIT_SUCCESS;
}
