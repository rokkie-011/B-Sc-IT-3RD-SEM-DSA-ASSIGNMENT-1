/*
 * q2.c
 *
 *  Created on: 30-Jul-2024
 *      Author: root
 */


//Implement a program to find length of a string with pointer.

#include<stdio.h>
#include<string.h>

int length (char *s)
{
	int count = 0;
	while(*s!='\0')
	{
	count++;
	s++;	
	}
	return count;
}

int main ()
{
	char str[30];
	int a;
	printf("Enter a String :");
	scanf("%s",str);
	//a = strlen (str);
	int b=length(str);
	
	printf("te count is %d",b);
	return 0;
}
