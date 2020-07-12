/*
 ============================================================================
 Name        : passed.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To check whether a student has passed or failed
 ============================================================================
 */

/* To check whether a student has passed or failed in a subject
   after he or she enters their mark
  (pass mark for a subject is 50 out of 100).*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter the marks obtained: ");
	scanf("%f",&mark);

	if ((mark < 50) & (mark>=0)){
		printf("Student has Failed !");
	}else {
		if ((mark >= 50) & (mark <= 100)){
			printf("Student has Passed !");
		}else{
			printf("Invalid Input [range 0-100]");
		}
	}




	return EXIT_SUCCESS;
}
