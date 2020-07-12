/*
 ============================================================================
 Name        : pattern.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To print pattern using numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,count;
	setbuf(stdout,NULL);
	printf("Enter the required rows :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(count=1;count<=i;count++){
			printf("%d ",count);
//			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
