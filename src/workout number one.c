/*
 ============================================================================
 Name        : workout.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int answer;
	setbuf(stdout,NULL);
	answer=sum();
	printf("THE RESULT IS %d",answer);
 return EXIT_SUCCESS;
}
int sum(){
	int num1,num2,result;
	setbuf(stdout,NULL);
	printf("ENTER A TWO NUMBERS ");
	scanf("%d%d",&num1,&num2);
	result=num1+num2;
	return result;
}
