/*
 ============================================================================
 Name        : arrayeven.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To find the total number of even numbers in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int asize,i,array1[100],count;
	setbuf(stdout,NULL);
	printf("To find total number of even numbers");
	printf("\n------------------------------------\n");
	printf("Enter the size of Arrays: ");
	scanf("%d",&asize);
//	input array values
	printf("Enter values for Array one by one:\n");
	for(i=0;i<asize;i++){
		printf("\t%d. ",i+1);
		scanf("%d",&array1[i]);
	}
// to count the number of even numbers
	count=0;
	for(i=0;i<asize;i++){
		if(array1[i]%2 == 0){
			count = count+1;
		}
	}
	printf("\nTotal number of even numbers : %d",count);

	return EXIT_SUCCESS;
}
