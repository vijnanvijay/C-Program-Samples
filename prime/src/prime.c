/*
 ============================================================================
 Name        : prime.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To find prime numbers for a given range/limit
 ============================================================================
 */

//   Prime numbers are numbers which are divisible by 1 and itself */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int maximum,num,count,i;
	setbuf(stdout,NULL);
	printf("Prime Numbers");
	printf("\n-------------\n");
	printf("Enter the limit: ");
	scanf("%d",&maximum);
	for(num=1;num<=maximum;num++){
		count=0;
		for(i=2;i<=num/2;i++){
			if(num%i == 0){
				count ++;
				break;
			}
		}
		if(count == 0 && num != 1){
			printf(" %d\n",num);
		}
	}
	return EXIT_SUCCESS;
}
