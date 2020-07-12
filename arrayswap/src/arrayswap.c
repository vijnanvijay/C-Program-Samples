/*
 ============================================================================
 Name        : arrayswap.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To input 2 arrays and swap it
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int asize,i,array1[100], array2[100],temp[100];
	setbuf(stdout,NULL);
	printf("To Swap 2 arrays");
	printf("\n----------------\n");
	printf("Enter the size of Arrays: ");
	scanf("%d",&asize);
//	input 1st array values
	printf("Enter values for 1st Array one by one:\n");
	for(i=0;i<asize;i++){
		printf("\t%d. ",i+1);
		scanf("%d",&array1[i]);
	}
//	input 2nd array values
	printf("Enter values for 2nd Array one by one:\n");
	for(i=0;i<asize;i++){
		printf("\t%d. ",i+1);
		scanf("%d",&array2[i]);
	}
// Array before swapping
	printf("Before Swap");
	printf("\n1st Array : ");
	for(i=0;i<asize;i++){
		printf("%d/",array1[i]);
	}
	printf("\n2nd Array : ");
	for(i=0;i<asize;i++){
		printf("%d/",array2[i]);
	}
// swapping
	for(i=0;i<asize;i++){
		temp[i]=array1[i];
		array1[i]=array2[i];
		array2[i]=temp[i];
	}
// Array after swapping
	printf("\nAfter Swap");
	printf("\n1st Array : ");
	for(i=0;i<asize;i++){
		printf("%d/",array1[i]);
	}
	printf("\n2nd Array : ");
	for(i=0;i<asize;i++){
		printf("%d/",array2[i]);
	}



	return EXIT_SUCCESS;
}
