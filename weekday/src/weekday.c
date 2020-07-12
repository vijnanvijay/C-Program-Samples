/*
 ============================================================================
 Name        : weekday.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : To display Weekday according to input
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int weekd;
	setbuf(stdout,NULL);
	printf("To display weekday according to selected number");
	printf("\n-----------------------------------------------\n");
	printf("Enter any number [1(Sun) ... 7(Sat)] : ");
	scanf("%d",&weekd);
	switch(weekd){
	case 1:
		printf("Selected weekday is Sunday");
		break;
	case 2:
		printf("Selected weekday is Monday");
		break;
	case 3:
		printf("Selected weekday is Tuesday");
		break;
	case 4:
		printf("Selected weekday is Wednesday");
		break;
	case 5:
		printf("Selected weekday is Thursday");
		break;
	case 6:
		printf("Selected weekday is Friday");
		break;
	case 7:
		printf("Selected weekday is Saturday");
		break;
	default:
		printf("Invalid entry");
	}


	return EXIT_SUCCESS;
}
