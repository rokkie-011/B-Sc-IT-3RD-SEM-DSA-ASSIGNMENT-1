/*
 * q1.c
 *
 *  Created on: 30-Jul-2024
 *      Author: root
 */


//Write a program to match two different pointer in 1 location in array.


#include<stdio.h>
int main ()
{
	int a[5] = {1,2,3,4,5};
	int *ptr1;
	int *ptr2;

	ptr1 = &a[0];
	ptr2 = &a[0];

	if (ptr1 == ptr2)
	{
		printf("Address of these two pointer is equal");
	}
	else
	{
		printf("Address of these two pointer is equal");
	}
	return 0;
}
