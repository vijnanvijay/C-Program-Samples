/*
 ============================================================================
 Name        : arraysumfind.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To create an array & sum the values & search a value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],limit,i,result,skey,fnd,ln;
	setbuf(stdout,NULL);
	printf("To create an Array / Sum the values / Find a value");
	printf("\n--------------------------------------------------\n");
// To enter the array limit
	printf("Enter the array limit : ");
	scanf("%d",&limit);
// To enter the values one by one upto the limit
	printf("Enter values one by one:\n");
	for(i=0;i<limit;i++){
		printf("\t%d. ",i+1);
		scanf("%d",&a[i]);
	}
// To sum the values in array
	result=0;
	for(i=0;i<limit;i++){
		result=result+a[i];
	}
	printf("\nSum of above array: %d",result);
// To find a particular value and its position in the array
	printf("\nEnter a value to search : ");
	scanf("%d",&skey);
	for(i=0;i<limit;i++){
		if(a[i]==skey){
			fnd=1;
			ln=i+1;
			break;
		} else {
			fnd=0;
		}
	}

	if(fnd==1){
		printf("Searched value %d found in line number %d ",skey,ln);
	} else{
		printf("Search value not found !");
	}


	return EXIT_SUCCESS;
}
