/*
 ============================================================================
 Name        : tp0_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int recursive(int a);
int recursive1(int a,int i);
int main(void) {
	int x, s,s1,i=1;
	puts("Donner x");
	scanf("%d", &x);
	s = recursive(x);
	printf("result= %d\n", s);
	s1 = recursive1(x,i);
	printf("result1= %d", s1);
	return 0;
}
int recursive(int a) {
	if (a > 1){
	 return a * recursive(a-1);
	}
	else
	return 1;
}

int recursive1(int a,int i) {
	if (a<1)
	return i;
	else{
		return recursive1(a-1,i*a);
	}
}
