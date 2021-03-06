/*
 ============================================================================
 Name        : oddeven.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To print odd & even numbers upto the given range
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,res,i;
	setbuf(stdout,NULL);
	printf("To display odd & even number in a given range & to find their sum");
	printf("\n-----------------------------------------------------------------\n");
	printf("Enter a limit : ");
	scanf("%d",&num);
	printf("\nOdd numbers upto %d\n",num);
	res=0;
	for(i=1;i<=num;i=i+2){
		res = res+i;
		printf("%d\n",i);
	}
	printf("Sum of Odd numbers is: %d\n",res);
	printf("\nEven numbers upto %d\n",num);
	res=0;
	for(i=2;i<=num;i=i+2){
		res = res+i;
		printf("%d\n",i);
	}
	printf("Sum of Even numbers is: %d\n",res);

	return EXIT_SUCCESS;
}
