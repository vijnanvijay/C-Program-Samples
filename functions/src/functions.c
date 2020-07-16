/*
 ============================================================================
 Name        : functions.c
 Author      : vijnan vijay k k
 Version     : July 2020
 Copyright   : Your copyright notice
 Description : Various types of Functions(with/without argument/return value)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void sum1();
void sum2(int,int);
int sum3(int,int);
int sum4();

int main(void) {

// Function without argument & without return value
	sum1();

// Function with argument & without return
	int a,b;
	setbuf(stdout,NULL);
	printf("\nEnter 2 Numbers one by one:\n");
	scanf("%d%d",&a,&b);
	sum2(a,b);

// Function with argument & with return
	int p,q,r;
	setbuf(stdout,NULL);
	printf("\nEnter 2 Numbers one by one:\n");
	scanf("%d%d",&p,&q);
	r=sum3(p,q);
	printf("Value of %d + %d is : %d",p,q,r);
	printf("\n(Function with argument & with return value)\n");

// Function without argument & with return value
	int t;
	t=sum4();
	printf("%d",t);
	printf("\n(Function without argument & with return value)\n");


	return EXIT_SUCCESS;
}
//**************************************************************** F U N C T I O N S ****************
// Function without argument & without return value
void sum1(){
	int num1,num2,result;
	setbuf(stdout, NULL);
	printf("\nEnter 2 Numbers one by one:\n");
	scanf("%d%d",&num1,&num2);
	result=num1+num2;
	printf("Value of %d + %d is : %d",num1,num2,result);
	printf("\n(Function without argument & without return value)\n");
}

// Function with argument & without return value
void sum2(int x, int y){
	int z;
	setbuf(stdout,NULL);
	z=x+y;
	printf("Value of %d + %d is : %d",x,y,z);
	printf("\n(Function with argument & without return value)\n");
}

// Function with argument & with return value
int sum3(int i, int j){
	int k;
	setbuf(stdout,NULL);
	k=i+j;
	return k;
}


// Function without argument & with return value
int sum4(){
	int l,m,n;
	setbuf(stdout,NULL);
	printf("\nEnter 2 Numbers one by one:\n");
	scanf("%d%d",&l,&m);
	n=l+m;
	printf("Value of %d + %d is : ",l,m);
	return n;
}
