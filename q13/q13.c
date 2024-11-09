/*
 * q13.c
 *
 *  Created on: 09-Aug-2024
 *      Author: root
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char str[10],stack[10];

	printf("\n Enter your string :");
	scanf("%s",str);

	int i = 0, top = 0;

	while (str[i] != '\0')
	{
		top++;
		stack[i] = str[i];
		i++;
	}

	for(i = top; i != -1; i--)
	{
		printf("%c",stack[i]);
	}
	return 0;
}
