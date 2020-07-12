/*
 ============================================================================
 Name        : mtable.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To print multiplication table for the given number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mul,num,res,i;
	setbuf(stdout,NULL);
	printf("To print Multiplication Table");
	printf("\n----------------------------\n");
	printf("Enter multiplication table of : ");
	scanf("%d",&mul);
	printf("Enter %d 's multiplication upto :",mul);
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		res = i*mul;
		printf("%d X %d = %d\n",mul,i,res);
	}

	return EXIT_SUCCESS;
}
