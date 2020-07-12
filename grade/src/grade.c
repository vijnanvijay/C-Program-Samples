/*
 ============================================================================
 Name        : grade.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To show grade obtained after entering total mark percentage
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int totalmark;
	char *gra;
	setbuf(stdout,NULL);
	printf("To display grade");
	printf("\n----------------\n");
	printf("Enter the percentage of marks obtained: ");
	scanf("%d",&totalmark);
	if (totalmark < 50) {
		gra = "Failed";
	} else if ((totalmark >= 50) & (totalmark <= 59)){
		gra = "E";
	} else if ((totalmark >= 60) & (totalmark <= 69)){
		gra = "D";
	} else if ((totalmark >= 70) & (totalmark <= 79)){
		gra = "C";
	} else if ((totalmark >= 80) & (totalmark <= 89)){
		gra = "B";
	} else if ((totalmark >= 90) & (totalmark <= 100)){
		gra = "A";
	} else {
		gra = "Invalid Data";
	}

	printf("Grade obtained: %s",gra);

	return EXIT_SUCCESS;
}