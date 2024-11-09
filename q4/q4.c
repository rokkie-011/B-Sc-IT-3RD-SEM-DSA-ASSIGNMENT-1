/*
 * q4.c
 *
 *  Created on: 30-Jul-2024
 *      Author: root
 */


//Write a program to perform various testing on pointers
//eg. *p++, p--, *++p


#include<stdio.h>
int main ()
{
	int a[5] = {1,2,3,4,5};

	int *p;

	p = &a[0];

	printf("\n Value of *p++ is :%d",*p++);
	printf("\n Value of p-- is :%d",p--);
	printf("\n Value of *++p is :%d",*++p);

	return 0;
}
