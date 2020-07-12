/*
 ============================================================================
 Name        : arraysort.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To sort an array in descending order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int asize,i,sarray[100],j,temp;
	setbuf(stdout,NULL);
	printf("To sort the array in descending order");
	printf("\n-------------------------------------\n");
	printf("Enter the size of Arrays: ");
	scanf("%d",&asize);
//	input array values
	printf("Enter values for Array one by one:\n");
	for(i=0;i<asize;i++){
		printf("\t%d. ",i+1);
		scanf("%d",&sarray[i]);
	}
// sort descending order
	for(i=0;i<asize-1;i++){
		for(j=i+1;j<asize;j++){
			if(sarray[i]<sarray[j]){
				temp=sarray[i];
				sarray[i]=sarray[j];
				sarray[j]=temp;
			}
		}
	}
// array after sorting
	printf("\nArray after sorting\n");
	for(i=0;i<asize;i++){
		printf("%d/",sarray[i]);
	}



	return EXIT_SUCCESS;
}
